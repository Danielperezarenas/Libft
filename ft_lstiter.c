/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:57:06 by danperez          #+#    #+#             */
/*   Updated: 2024/10/26 17:28:24 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
/*
void	print_content(void *content)
{
	printf("Content: %s\n", (char *)content);
}

int	main(void)
{
	t_list	*node1 = ft_lstnew(ft_strdup("Node 1"));
	t_list	*node2 = ft_lstnew(ft_strdup("Node 2"));
	t_list	*node3 = ft_lstnew(ft_strdup("Node 3"));

	node1 -> next = node2;
	node2 -> next = node3;

	// Usar ft_lstiter para aplicar print_content a cada nodo
	ft_lstiter(node1, print_content);

	// Liberar la lista
	ft_lstclear(&node1, free);
	return (0);
}
 */