/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsa <elsa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:42:04 by evarache          #+#    #+#             */
/*   Updated: 2025/12/04 18:17:23 by elsa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"


char	type_convert(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || 
		c == 'd' || c == 'i' || c == 'u' || 
		c == 'x' || c == 'X' || c == '%')
		return (c);
	return (0);
}

int	call_print_convert(va_list *args, char c)
{
	int count = 0;
	if (c == 'c')
		count += ft_putchar((char)(va_arg(*args, int)));
	else if (c == 's')
		count += ft_putstr(va_arg(*args, char*));
	//else if (c == 'p')
		//count += ft_putadress(va_arg(*args, char*));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr_base(va_arg(*args, long), 10, "0123456789");
	else if (c == 'u')
		count += ft_putnbr_base(va_arg(*args, long), 10, "0123456789");
	else if (c == 'x')
		count += ft_putnbr_base(va_arg(*args, long), 16, "0123456789abcdef");
	else if (c == 'X')
		count += ft_putnbr_base(va_arg(*args, long), 16, "0123456789ABCDEF");
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
	
}


int	ft_printf(const char *format, ...)
{
	va_list args;
	int 	i;
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



int main()
{
	int test1 = ft_printf("chat%kon %c\n", 42, 'y');
	int test1_bis = printf("chat%kon %c\n", 42, 'y');

	// ft_printf("chat %s on %c\n", "youpi", 'y');
	// printf("chat %s on %c\n", "youpi", 'y');

	int test2 = ft_printf("chat %d on %c\n", -89, 'y');
	int test2_bis = printf("chat %d on %c\n", -89, 'y');

	printf("%d\n", test1);
	printf("%d\n", test1_bis);

	printf("%d\n", test2);
	printf("%d\n", test2_bis);
	
	
	int test3 = ft_printf("chat %i on %c, bfsbj %% jjhfghis %cosvn, %d jvsvnos, %xfnwfn%X\n", 89, 'y', "chat", 12, 89);
	int test3_bis = printf("chat %i on %c, bfsbj %% jjhfghis %cosvn, %d jvsvnos, %xfnwfn%X\n", 89, 'y', "chat", 12, 89);
	
	printf("%d\n", test3);
	printf("%d\n", test3_bis);
	
	// ft_printf("chat %i on %c\n", -89,8, 'y');
	// printf("chat %i on %c\n", -89,8, 'y');

	//int test = 56489; //=> 1101010010101010101 => 432312 => DSF

	// ft_printf("chat %x on %c\n", test, 'y');
	// printf("chat %x on %c\n", test, 'y');
	
	// ft_printf("chat %X on %c\n", test, 'y');
	// printf("chat %X on %c\n", test, 'y');

	// ft_printf("chat %p on %c\n", test, 'y');
	// printf("chat %p on %c\n", test, 'y');
	return (0);
}