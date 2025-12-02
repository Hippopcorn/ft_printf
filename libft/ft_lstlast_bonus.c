/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:33:19 by evarache          #+#    #+#             */
/*   Updated: 2025/11/18 15:44:32 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns the last node of the list.

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main()
// {
//     t_list list[5];
//     int values[5] = {0, 1, 2, 3, 4};

//     for (int i = 0; i < 5; i++)
//     {
//         list[i].content = &values[i];
//         list[i].next = (i < 4) ? &list[i + 1] : NULL;
//     }

//     t_list *last = ft_lstlast(list);
//     printf("%d\n", *(int *)last->content);  // prints 4

//     return 0;
// }
