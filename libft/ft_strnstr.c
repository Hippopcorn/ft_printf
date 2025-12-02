/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:25:41 by evarache          #+#    #+#             */
/*   Updated: 2025/12/02 16:34:37 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strnstr locates the first occurrence of the 
// null-terminated string little in the string haystack, where not 
// more than len characters are searched.
// Characters that appear after a ‘\0’ character are not searched.

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char			*big_cast;
	char			*little_cast;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	big_cast = (char *)big;
	little_cast = (char *)little;
	if (little[0] == '\0')
		return (big_cast);
	while (big_cast[i] && i < len && ft_strlen(little) <= len)
	{
		if (big_cast[i] == little_cast[0])
		{
			j = 0;
			while (big_cast[i + j] == little_cast[j] && i + j < len)
			{
				if (little_cast[j + 1] == '\0' || j == len - 1)
					return (&big_cast[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
