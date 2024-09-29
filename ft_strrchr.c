/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:51:22 by danperez          #+#    #+#             */
/*   Updated: 2024/09/29 18:16:41 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return (NULL);
	while (i)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char str[] = "Hello World!";
	char *ptr = strrchr(str, 'W');

	size_t pos = ptr - str;  // calcular la posición del carácter encontrado
	printf("Found 'W' at position %zu\n", pos);
	printf("%p\n", ptr);
	return (0);
}
 */