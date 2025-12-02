/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:09:31 by evarache          #+#    #+#             */
/*   Updated: 2025/11/18 15:46:07 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Deletes and frees the given node and all its successors, using the 
// function ’del’ and free(3).
// Finally, set the pointer to the list to NULL.

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*previous;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		previous = current;
		del(current->content);
		current = current->next;
		free(previous);
	}
	*lst = NULL;
}
