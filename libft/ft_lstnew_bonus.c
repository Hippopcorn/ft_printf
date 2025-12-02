/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evarache <evarache@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 09:51:40 by evarache          #+#    #+#             */
/*   Updated: 2025/11/19 09:36:59 by evarache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// put the pointer of content in the t_list.content

t_list	*ft_lstnew(void *content)
{
	t_list	*p_new_node;

	p_new_node = malloc(sizeof(t_list));
	if (!p_new_node)
		return (NULL);
	p_new_node -> content = content;
	p_new_node -> next = NULL;
	return (p_new_node);
}

// int	main()
// {
// 	char *data = "hello, i'm a data";

//     t_list *l = ft_lstnew(data);
// 	printf("%p\n", data);
// 	printf("%p\n", l->content);
// }