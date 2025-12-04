/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:52:03 by elsa              #+#    #+#             */
/*   Updated: 2025/12/04 16:54:32 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr_base(long long nb, int length_base, char *base);
int		ft_putadress(char *ptr);

#endif