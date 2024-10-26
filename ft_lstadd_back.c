/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:58:32 by danperez          #+#    #+#             */
/*   Updated: 2024/10/26 16:08:20 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
}
/*
int	main(void)
{
	t_list	*head = ft_lstnew("Node 1");
	ft_lstadd_back(&head, ft_lstnew("Node 2"));
	ft_lstadd_back(&head, ft_lstnew("Node 3"));

	t_list *current = head;
	while (current)
	{
		printf("Lista: %s\n", (char *)current->content);
		current = current -> next;
	}
	while (head)
	{
		t_list *tmp = head;
		head = head->next;
		free(tmp);
	}
	return (0);
}
*/