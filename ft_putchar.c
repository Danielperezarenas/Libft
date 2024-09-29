/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:36:03 by danperez          #+#    #+#             */
/*   Updated: 2024/09/27 15:16:11 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Write one character to the standar output
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/* 
int	main(void)
{
	ft_putchar('A');
	return (0);
}
*/