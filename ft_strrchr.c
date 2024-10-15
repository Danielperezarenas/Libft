/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:51:22 by danperez          #+#    #+#             */
/*   Updated: 2024/10/15 14:46:03 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
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
	char *ptr = ft_strrchr(str, 'r');

	size_t pos = ptr - str;  // calcular la posición del carácter encontrado
	printf("Found 'r' at position %zu\n", pos);
	printf("%s\n", ptr);
	return (0);
}
 */