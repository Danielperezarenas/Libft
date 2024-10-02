/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:31:59 by danperez          #+#    #+#             */
/*   Updated: 2024/10/03 00:07:24 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned int		i;

	ptr = s;
	i = 0;
	while (i < n && ptr[i] != '\0')
	{
		if (ptr[i] == (unsigned char)c)
			return ((char *)ptr + i);
		i++;
	}
	return (NULL);    
}
/* 
int main() {
	char buffer[] = "Hello, world!";
	
	// Buscamos la primera ocurrencia del carácter 'w' en el buffer.
	char *ptr = ft_memchr(buffer, 'w', 8 - 1);

	if (ptr != NULL) {
		printf("Carácter encontrado: %c\n", *ptr);
	} else {
		printf("Carácter no encontrado.\n");
	}
	return (0);
}
 */