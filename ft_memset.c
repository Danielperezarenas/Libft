/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:45:54 by danperez          #+#    #+#             */
/*   Updated: 2024/09/19 15:45:54 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fill a contiguous block of memory with a specific value.
void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = s;
	value = (unsigned char)c;
	while (len--)
		*ptr++ = value;
	return (s);
}

/* int	main(void)
{
	char buffer[10];

	// Llenar el buffer con el carácter 'B' (66 en ASCII) usando mi_memset
	ft_memset(buffer, 'B', sizeof(buffer));

	// Imprimir el contenido del buffer en formato hexadecimal
	printf("Contenido del buffer:\n");
	size_t i = 0;
	while (i < sizeof(buffer)) {
		printf("buffer[%ld] = 0x%X\n", i, (unsigned char)buffer[i]);
		i++;
	}

	// Imprimir el contenido del buffer como una cadena de caracteres
	printf("\nContenido del buffer como cadena: ");
	buffer[9] = '\0'; // Asegurar que el último byte sea el terminador nulo
	printf("%s\n", buffer);
	return (0);
}
*/