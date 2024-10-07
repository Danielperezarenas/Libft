/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:22:43 by danperez          #+#    #+#             */
/*   Updated: 2024/09/21 19:22:43 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/* 
int	main(void)
{
	char	buffer[10];

	ft_bzero(buffer, sizeof(buffer));
	size_t size = sizeof(buffer);
	printf("Tamaño del buffer es: %zu bytes\n", size);
	return (0);
}
 */