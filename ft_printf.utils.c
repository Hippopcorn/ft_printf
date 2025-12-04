/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:12:41 by elsa              #+#    #+#             */
/*   Updated: 2025/12/04 17:24:56 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
         write(1, &str[i], 1);
         i++;
    }
    return (i);
}

// int ft_putadress(char *ptr)
// {
//     char *adress;

//     adress = &ptr;
//     printf("%s\n", adress);
//     return (1);
// }


int	ft_putnbr_base(long long nb, int length_base, char *base)
{
	char	nbr[100];
	int		i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb == 0)
		ft_putchar(nb + '0');
	while (nb > 0)
	{
		nbr[i] = base[(nb % length_base)];
		nb = nb / length_base;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(nbr[i]);
		i--;
	}
    return (2);
}

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

// int main()
// {
//     char adress[32];
//     int test = 3;
//     int *ptest = &test;

    
//     ft_memcpy(adress, &ptest, sizeof(ptest));
//     printf("%s\n", adress); 
// }
