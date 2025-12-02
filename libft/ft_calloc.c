/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:37:52 by elsa              #+#    #+#             */
/*   Updated: 2025/12/02 16:32:53 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_calloc contiguously allocates enough space for count
// objects that are size bytes of memory each and returns a pointer to the
// allocated memory.  The allocated memory is filled with bytes of value
// zero.

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			total;
	unsigned char	*mem;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (size > INT_MAX / nmemb)
		return (NULL);
	total = nmemb * size;
	mem = malloc(total);
	if (!mem)
		return (NULL);
	while (i < total)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
