/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:01:42 by evarache          #+#    #+#             */
/*   Updated: 2025/12/02 16:34:04 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strdup returns a pointer to a new string which is a duplicate 
// of the string s

char	*ft_strdup(const char *s1)
{
	char	*copy;
	char	*s1_cast;
	int		i;

	i = 0;
	s1_cast = (char *)s1;
	copy = malloc(sizeof(char) * ft_strlen(s1_cast) + 1);
	if (!copy)
		return (NULL);
	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
