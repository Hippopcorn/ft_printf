/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:42:04 by evarache          #+#    #+#             */
/*   Updated: 2025/12/06 18:42:35 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	type_convert(char c)
{
	if (c == 'c' || c == 's' || c == 'p'
		|| c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

static void	call_print_convert(va_list *args, char c, int *count)
{
	if (c == 'c')
		ft_putchar((char)(va_arg(*args, int)), count);
	else if (c == 's')
		ft_putstr(va_arg(*args, char *), count);
	else if (c == 'p')
		ft_putadress(va_arg(*args, void *), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(*args, int), count);
	else if (c == 'u')
		ft_putunsigned_int(va_arg(*args, unsigned int), count);
	else if (c == 'x')
		ft_putnbr_base_hexa(va_arg(*args, unsigned int),
			16, "0123456789abcdef", count);
	else if (c == 'X')
		ft_putnbr_base_hexa(va_arg(*args, unsigned int),
			16, "0123456789ABCDEF", count);
	else if (c == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count_nb_print;

	i = 0;
	count_nb_print = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (type_convert(format[i]))
			{
				call_print_convert(&args, format[i++], &count_nb_print);
				continue ;
			}
		}
		else
			ft_putchar(format[i], &count_nb_print);
		i++;
	}
	va_end(args);
	return (count_nb_print);
}
