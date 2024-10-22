/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:00:53 by danperez          #+#    #+#             */
/*   Updated: 2024/10/22 11:13:22 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	if (*s)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
	}
}
/* 
int	main(void)
{
	ft_putstr_fd("Hola Campus 42!\n", 1);
	return (0);
}
 */