/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 00:16:09 by danperez          #+#    #+#             */
/*   Updated: 2024/09/27 00:16:09 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns a ptr to the 1st occurrence of the character 'c' in the string 's'
// or a null pointer if the character is not found.
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s);
		i++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char str[] = "Hello World!";
	char *ptr = strchr(str, 'W');

	size_t pos = ptr - str;  // calcular la posición del carácter encontrado
	printf("Found 'W' at position %zu\n", pos);
	printf("%p\n", ptr);
	return (0);
}
 */