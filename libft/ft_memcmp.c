/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:55:35 by evarache          #+#    #+#             */
/*   Updated: 2025/12/02 16:33:28 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_memcmp compares byte string s1 against byte string s2. 
// Both strings are assumed to be n bytes long.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char			*s1_cast;
	unsigned char			*s2_cast;
	unsigned char			i;

	i = 0;
	s1_cast = (unsigned char *)s1;
	s2_cast = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1_cast[i] != s2_cast[i])
			return (s1_cast[i] - s2_cast[i]);
		i++;
	}
	return (0);
}
