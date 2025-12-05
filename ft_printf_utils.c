/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:12:41 by elsa              #+#    #+#             */
/*   Updated: 2025/12/05 14:41:27 by evarache         ###   ########.fr       */
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

int	ft_putnbr(int nb)
{
	char	nbr[10];
	int		i;

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb == 0)
		ft_putchar(nb + '0');
	while (nb > 0)
	{
		nbr[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(nbr[i]);
		i--;
	}
	return (1);
}

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


int	ft_putnbr_base_hexa(unsigned int nb, int length_base, char *base)
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

// int main()
// {
//     // char adress[32];
//     // int test = 3;
//     // int *ptest = &test;

// 	ft_putnbr_base(-89, 10, "0123456789");

    

// }
