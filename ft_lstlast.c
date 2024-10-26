/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:18:45 by danperez          #+#    #+#             */
/*   Updated: 2024/10/25 19:22:41 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*head = ft_lstnew("Node 1");
	ft_lstadd_front(&head, ft_lstnew("Node 2"));
	ft_lstadd_front(&head, ft_lstnew("Node 3"));

	t_list	*last = ft_lstlast(head);
	if (last)
		printf("Last node: %s\n", (char *)last -> content);
	while (head)
	{
		t_list *tmp = head;
		head = head->next;
		free(tmp);
	}
	return (0);
}
*/