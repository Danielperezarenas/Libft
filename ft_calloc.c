/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:35:49 by danperez          #+#    #+#             */
/*   Updated: 2024/10/11 04:13:10 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		ptr = NULL;
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return NULL;
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

