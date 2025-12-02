/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:30:33 by evarache          #+#    #+#             */
/*   Updated: 2025/12/02 16:33:55 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// count_split count the parts that will be disociated to mallloc the tab**
// count_carac will serve to count the caracteres of each part and malloc 
// the right len.
// in split function, we malloc a tab ** of size count_split(), then we run 
// through the string, when we found a 'c', we call ft_count_char with the 
// index we are, malloc a char* with the return of this function, then we 
// complete the tab with the carac until found a 'c'.

static int	ft_count_split(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	ft_count_char(char const *s, char c, int i)
{
	int	count;

	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		count++;
		i++;
	}
	return (count);
}

static char	*ft_make_substr(char const *s, char c, int i)
{
	int		i_substr;
	char	*substr;

	i_substr = 0;
	substr = ft_calloc((ft_count_char(s, c, i) + 1), sizeof(char));
	if (!substr)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		substr[i_substr++] = s[i];
		i++;
	}
	substr[i_substr] = '\0';
	return (substr);
}

static void	ft_free_tab(int i, char **tab)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		i_tab;

	i = 0;
	i_tab = 0;
	tab = ft_calloc((ft_count_split(s, c) + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
		{
			tab[i_tab] = ft_make_substr(s, c, i);
			if (tab[i_tab] == NULL)
			{
				ft_free_tab(i_tab, tab);
				return (NULL);
			}
			i_tab++;
		}
		i++;
	}
	tab[i_tab] = NULL;
	return (tab);
}
