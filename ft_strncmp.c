/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:51:45 by danperez          #+#    #+#             */
/*   Updated: 2024/10/04 14:52:18 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* 
int	main() {

	printf("%d\n", ft_strncmp("hello", "hello", 4));
	printf("%d\n", ft_strncmp("apple", "apricot", 8));
	printf("%d\n", ft_strncmp("bananass", "banana", 15));
	printf("%d\n", ft_strncmp("grapefruit", "grape", 4));
	printf("%d\n", ft_strncmp("watermelon", "waterMelon", 20));

	return (0);
}
 */