/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:54:09 by danperez          #+#    #+#             */
/*   Updated: 2024/10/26 11:54:34 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst -> content);
		free(lst);
	}
}
/*
static void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *node1 = ft_lstnew(ft_strdup("Node 1"));
	t_list *node2 = ft_lstnew(ft_strdup("Node 2"));
	t_list *node3 = ft_lstnew(ft_strdup("Node 3"));

	// Enlazar los nodos
	node1->next = node2;
	node2->next = node3;

	// Mostrar contenido de la lista antes de eliminar
	t_list *current = node1;
	while (current)
	{
		printf("Node content: %s\n", (char *)current->content);
		current = current->next;
	}

	// Desvincular node y eliminarlo
	node1->next = node2->next;
	ft_lstdelone(node2, del);

	// Mostrar contenido de la lista después de eliminar node2
	printf("\nAfter deleting node2:\n");
	current = node1;
	while (current)
	{
		printf("Node content: %s\n", (char *)current->content);
		current = current->next;
	}

	// Liberar el resto de los nodos
	ft_lstdelone(node1, del);
	ft_lstdelone(node3, del);

	return (0);
}
 */