/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:31:48 by danperez          #+#    #+#             */
/*   Updated: 2024/10/27 00:24:05 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*element;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		element = ft_lstnew(f(lst -> content));
		if (!element)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, element);
		lst = lst -> next;
	}
	return (new_lst);
}
/*
// Función para duplicar el contenido del nodo
static void	*duplicate_content(void *content)
{
	char *str = (char *)content;
	return ft_strdup(str);
}

// Función de eliminación de contenido
static void	del(void *content)
{
	free(content);
}

int main(void) {
	// Crear nodos originales
	t_list *node1 = ft_lstnew(ft_strdup("Node 1"));
	t_list *node2 = ft_lstnew(ft_strdup("Node 2"));
	t_list *node3 = ft_lstnew(ft_strdup("Node 3"));

	// Enlazar los nodos
	node1->next = node2;
	node2->next = node3;

	// Aplicar ft_lstmap
	t_list *mapped_list = ft_lstmap(node1, duplicate_content, del);

	// Imprimir la lista original
	printf("Original list:\n");
	for (t_list *current = node1; current != NULL; current = current->next) {
		printf("Content: %s\n", (char *)current->content);
	}

	// Imprimir la lista mapeada
	printf("\nMapped list:\n");
	for (t_list *current = mapped_list; current != NULL; current = current->next) {
		printf("Content: %s\n", (char *)current->content);
	}

	// Liberar ambas listas
	ft_lstclear(&node1, del);
	ft_lstclear(&mapped_list, del);

	return (0);
}
*/