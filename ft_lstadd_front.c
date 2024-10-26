/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:29:15 by danperez          #+#    #+#             */
/*   Updated: 2024/10/25 16:46:07 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*new_node;

	head = ft_lstnew("Second node");
	printf("Before adding new node: %s\n", (char *)head->content);
	new_node = ft_lstnew("First node");
	ft_lstadd_front(&head, new_node);
	printf("After adding new node: %s\n", (char *)head->content);
	printf("Next node content: %s\n", (char *)head->next->content);
	return (0);
}
*/