/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:40:33 by evarache          #+#    #+#             */
/*   Updated: 2025/12/02 16:33:23 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_memchr scans  the  initial n bytes of the memory area pointed 
// to by s for the first instance of c.  Both c and the bytes of the memory 
// area pointed to by s are interpreted as unsigned char.

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cast;
	unsigned int	i;

	s_cast = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_cast[i] == (unsigned char)c)
		{
			return (&s_cast[i]);
		}
		i++;
	}
	return (0);
}
