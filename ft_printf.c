/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:42:04 by evarache          #+#    #+#             */
/*   Updated: 2025/12/03 15:18:54 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int	count_carac(char *str, char c)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	type_conversion(char *str, int index)
{
	char	type_conv;
	
	while(str[index])
	{
		if (str[index] == '%')
		{
			type_conv = str[index + 1];
			break ;
		}
		index ++;
	}
	if (type_conv != 'c' && type_conv != 's' && type_conv != 'p' &&
		type_conv != 'd' && type_conv != 'i' && type_conv != 'u' && 
		type_conv != 'x' && type_conv != 'X' && type_conv != '%')
		return (NULL);
	return (type_conv);
	
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int 	i;
	int 	n_arg;

	i = 0;
	n_arg = 0;
	va_start(args, format);
	
	
	// pour parcourir les arguments
	while (i < count_carac((char *)format, '%'))  // on parcoure le nombres d'arguments
	{
        printf("%c ", va_arg(args, int));  // avance de 1 arg a chaque appel
		i++;
	}
	va_end(args);
	return (0);
}



int main()
{
	//printf("%d\n", count_carac("hfdgf%khafk%kaba%%kb%", '%'));
	ft_printf("c%ou%co%u", 'c', 'u', 'i');
	return (0);
}