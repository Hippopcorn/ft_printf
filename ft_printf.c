/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:42:04 by evarache          #+#    #+#             */
/*   Updated: 2025/12/06 12:39:39 by elsa             ###   ########.fr       */
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

static int	call_print_convert(va_list *args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar((char)(va_arg(*args, int)));
	else if (c == 's')
		count += ft_putstr(va_arg(*args, char *));
	else if (c == 'p')
		count += ft_putadress(va_arg(*args, void *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(*args, int));
	else if (c == 'u')
		count += ft_putunsigned_int(va_arg(*args, unsigned int));
	else if (c == 'x')
		count += ft_putnbr_base_hexa(va_arg(*args, unsigned int),
				16, "0123456789abcdef");
	else if (c == 'X')
		count += ft_putnbr_base_hexa(va_arg(*args, unsigned int),
				16, "0123456789ABCDEF");
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
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
				count_nb_print += call_print_convert(&args, format[i++]);
				continue ;
			}
		}
		else
			ft_putchar(format[i]);
		i++;
		count_nb_print++;
	}
	va_end(args);
	return (count_nb_print);
}
// int main()
// {
// 	ft_printf("char");
// }