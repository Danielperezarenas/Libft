/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:57:01 by danperez          #+#    #+#             */
/*   Updated: 2024/09/22 18:57:01 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies n bytes from the pointer of src to the pointer of dest
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
/* 
int	main(void)
{
	const char *mensaje = "Hola";
	char buffer[20];

	printf("buffer antes de copia %s\n", buffer);
	ft_memcpy(buffer, mensaje, 5);
	printf("Contenido del buffer: %s\n", buffer);
	return (0);
}
 */