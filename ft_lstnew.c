/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:58:21 by danperez          #+#    #+#             */
/*   Updated: 2024/10/24 22:30:45 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list -> content = content;
	list -> next = NULL;
	return (list);
}
/*
int	main(void)
{
	t_list	*new_node;
	char	*content = "Hello, World!";

	new_node = ft_lstnew(content);
	if (new_node)
	{
		printf("Node content: %s\n", (char *)new_node->content);
		printf("Next node: %p\n", (void *)new_node->next);
	}
	else
		printf("Failed to create a new node.\n");
	free(new_node);
	return (0);
}
*/