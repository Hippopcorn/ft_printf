/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:42:10 by evarache          #+#    #+#             */
/*   Updated: 2025/12/02 16:34:07 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_striteri applies the function ’f’ to each character of the
// string passed as argument, passing its index as
// the first argument. Each character is passed by
// address to ’f’ so it can be modified if necessary

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
