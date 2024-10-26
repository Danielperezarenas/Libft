/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:17:22 by danperez          #+#    #+#             */
/*   Updated: 2024/10/26 16:56:10 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (*lst)
	{
		while (*lst)
		{
			tmp = (*lst) -> next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
	}
	*lst = 0;
}
/*
static void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node1 = ft_lstnew(ft_strdup("Node 1"));
	t_list	*node2 = ft_lstnew(ft_strdup("Node 2"));
	t_list	*node3 = ft_lstnew(ft_strdup("Node 3"));

	node1 -> next = node2;
	node2 -> next = node3;
	t_list	*current = node1;
	while (current)
	{
		printf("Node content: %s\n", (char *)current -> content);
		current = current -> next;
	}
	ft_lstclear(&node1, del);
	return (0);
}
*/