/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:52:03 by elsa              #+#    #+#             */
/*   Updated: 2025/12/06 12:28:33 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr_base(long long nb, int length_base, char *base);
int		ft_putadress(char *ptr);
int		ft_putnbr(int nb);
int		ft_putnbr_base_hexa(unsigned int nb, int length_base, char *base);
int     ft_putunsigned_int(unsigned int nb);
int     ft_putnbr_base_ull(unsigned long long nb, int length_base, char *base);

#endif