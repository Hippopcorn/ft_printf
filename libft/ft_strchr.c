/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:51:38 by evarache          #+#    #+#             */
/*   Updated: 2025/12/02 16:34:00 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strchr returns a pointer to the first occurrence of the 
// character c in the string s

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s_cast;

	i = 0;
	s_cast = (char *)s;
	while (s_cast[i] != '\0')
	{
		if ((unsigned char)c == s_cast[i])
			return (&s_cast[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&s_cast[i]);
	return (NULL);
}
