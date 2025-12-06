/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 12:33:04 by elsa              #+#    #+#             */
/*   Updated: 2025/12/06 17:30:19 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base_hexa(unsigned int nb, int length_base, char *base, int *count)
{
	char	nbr[100];
	int		i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb = -nb;
	}
	else if (nb == 0)
		ft_putchar(nb + '0', count);
	while (nb > 0)
	{
		nbr[i] = base[(nb % length_base)];
		nb = nb / length_base;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(nbr[i], count);
		i--;
	}
}

void	ft_putnbr_base_ull(unsigned long long nb, int length_base, char *base, int *count)
{
	char	nbr[100];
	int		i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb = -nb;
	}
	else if (nb == 0)
		ft_putchar(nb + '0', count);
	while (nb > 0)
	{
		nbr[i] = base[(nb % length_base)];
		nb = nb / length_base;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(nbr[i], count);
		i--;
	}
}
