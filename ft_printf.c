/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:42:04 by evarache          #+#    #+#             */
/*   Updated: 2025/12/05 16:20:06 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"


char	type_convert(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || 
		c == 'd' || c == 'i' || c == 'u' || 
		c == 'x' || c == 'X' || c == '%')
		return (1);
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
		count += ft_putnbr(va_arg(*args, int));
	else if (c == 'u')
		count += ft_putnbr_base(va_arg(*args, long), 10, "0123456789");
	else if (c == 'x')
		count += ft_putnbr_base_hexa(va_arg(*args, unsigned int), 16, "0123456789abcdef");
	else if (c == 'X')
		count += ft_putnbr_base_hexa(va_arg(*args, unsigned int), 16, "0123456789ABCDEF");
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



// int main()
// {
// 	// int test1 = ft_printf("chat %k on\n", 42);  // %k = comportement indefini
// 	// int test1_bis = printf("chat %k on\n", 42);
	
	
// 	int test3 = ft_printf("chat %i on %c, bfsbj %% jjhfghis %sosvn, %d jvsvnos, %xfnwfn%X\n", 89, 'y', "Y", 12, 89, 105);  // a fixer
// 	int test3_bis = printf("chat %i on %c, bfsbj %% jjhfghis %sosvn, %d jvsvnos, %xfnwfn%X\n", 89, 'y', "Y", 12, 89, 105);

// 	printf("%d\n", test3);
// 	printf("%d\n", test3_bis);

// 	return (0);
// }