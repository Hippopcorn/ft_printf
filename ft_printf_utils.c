/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:12:41 by elsa              #+#    #+#             */
/*   Updated: 2025/12/06 18:37:26 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *count)
{
	(*count)++;
	write(1, &c, 1);
}

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		ft_putchar(str[i], count);
		i++;
	}
}

void	ft_putadress(char *ptr, int *count)
{
	unsigned long long	adress;

	if (ptr == NULL)
	{
		ft_putstr("0x0", count);
		return ;
	}
	adress = (unsigned long long)ptr;
	ft_putstr("0x", count);
	ft_putnbr_base_ull(adress, 16, "0123456789abcdef", count);
}

void	ft_putnbr(int nb, int *count)
{
	char			nbr[10];
	int				i;
	unsigned int	unb;

	i = 0;
	if (nb == 0)
		ft_putchar(nb + '0', count);
	if (nb < 0)
		ft_putchar('-', count);
	if (nb == -2147483648 || nb >= 0)
		unb = nb;
	else
		unb = -nb;
	while (unb > 0)
	{
		nbr[i] = (unb % 10) + '0';
		unb = unb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(nbr[i], count);
		i--;
	}
}

void	ft_putunsigned_int(unsigned int nb, int *count)
{
	char	nbr[10];
	int		i;

	i = 0;
	if (nb == 0)
		ft_putchar(nb + '0', count);
	while (nb > 0)
	{
		nbr[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(nbr[i], count);
		i--;
	}
}
