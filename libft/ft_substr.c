/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:58:56 by elsa              #+#    #+#             */
/*   Updated: 2025/12/02 16:34:50 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_substr allocates memory (using malloc(3)) and returns a
// substring from the string ’s’.
// The substring starts at index ’start’ and has a maximum length of ’len’

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				i;
	unsigned int	end;
	char			*substring;
	int				alloc;

	i = 0;
	end = start + len;
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (end >= ft_strlen(s))
		alloc = ft_strlen(s) - start;
	else
		alloc = len;
	substring = ft_calloc((alloc + 1), sizeof(char));
	if (!substring)
		return (NULL);
	while (start < end && start < ft_strlen(s))
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	i++;
	substring[i] = '\0';
	return (substring);
}
