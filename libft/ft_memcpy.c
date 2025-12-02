/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:17:22 by evarache          #+#    #+#             */
/*   Updated: 2025/12/02 16:33:32 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_memcpy copies n bytes from memory area src to memory 
// area dest. The memory areas must not overlap.  
// Use memmove(3) if the memory areas do overlap.

void	*ft_memcpy( void *dest, const void *src, size_t n)
{
	char			*dest_cast;
	char			*src_cast;
	unsigned char	i;

	i = 0;
	dest_cast = (char *)dest;
	src_cast = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest_cast[i] = src_cast[i];
		i++;
	}
	return (dest);
}
