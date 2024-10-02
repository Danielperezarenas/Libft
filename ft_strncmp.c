/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:01:16 by danperez          #+#    #+#             */
/*   Updated: 2024/10/02 16:37:24 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Compares the first n bytes of 2 str.
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

#include <stdio.h>

int	main() {
	// Ejemplos de uso
	printf("%d\n", ft_strncmp("hello", "hello", 4));
	printf("%d\n", ft_strncmp("apple", "apricot", 8));
	printf("%d\n", ft_strncmp("banana", "bananass", 4));
	printf("%d\n", ft_strncmp("grapefruit", "grape", 7));
	printf("%d\n", ft_strncmp("watermelon", "waterMelon", 20));
	
	return (0);
}