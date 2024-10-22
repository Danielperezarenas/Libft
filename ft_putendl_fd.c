/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:14:20 by danperez          #+#    #+#             */
/*   Updated: 2024/10/22 11:23:34 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	if (*s)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
	}
	write(fd, "\n", 1);
}
/* 
int	main(void)
{
	ft_putendl_fd("Hola Campus 42!", 1);
	return (0);
}
 */