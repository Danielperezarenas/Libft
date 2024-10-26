/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:50:26 by danperez          #+#    #+#             */
/*   Updated: 2024/10/25 18:27:05 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		lst = lst -> next;
		len++;
	}
	return (len);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	// Creando nodos con ft_lstnew
	head = ft_lstnew("First node");
	node1 = ft_lstnew("Second node");
	node2 = ft_lstnew("Third node");
	node3 = ft_lstnew("Fourth node");

	// Conectando nodos
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);

	// Imprimiendo tamaño de la lista
	printf("List size: %d\n", ft_lstsize(head));
	printf("List: %s\n", (char *)head -> content);

	while (head != NULL)
	{
		printf("Node content: %s\n", (char *)head->content);  // Imprime el contenido del nodo
		head = head->next;  // Avanza al siguiente nodo
	}

	// Liberar memoria de los nodos
	while (head != NULL)
	{
		t_list *temp = head->next;  // Guarda el siguiente nodo
		free(head);                 // Libera el nodo actual
		head = temp;                // Avanza al siguiente nodo
	}
	return (0);
}
*/