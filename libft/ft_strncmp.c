/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:27:55 by evarache          #+#    #+#             */
/*   Updated: 2025/12/02 16:34:30 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strncmp compare two strings until n

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int		i;
	unsigned int		diff;
	const unsigned char	*us1;
	const unsigned char	*us2;

	us1 = (const unsigned char *)s1;
	us2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && (us1[i] || us2[i]) && us1[i] == us2[i])
	{
		i++;
	}
	diff = us1[i] - us2[i];
	return (diff);
}
