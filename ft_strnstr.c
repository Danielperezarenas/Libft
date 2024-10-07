/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:05:11 by danperez          #+#    #+#             */
/*   Updated: 2024/10/06 16:19:06 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && haystack[i + j] == needle[j]
			&& i + j < len)
			j++;
		if (needle[j] == '\0')
		{
			return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
/* 
int	main() {

	char str1[] = "Hello, World!";
	char to_find1[] = "World";
	char *result1 = ft_strnstr(str1, to_find1, 12);
	printf("Expected: World!, Got: %s\n", result1 ? result1 : "NULL");

	char str2[] = "abcdefg";
	char to_find2[] = "cde";
	char *result2 = ft_strnstr(str2, to_find2, 9);
	printf("Expected: cdefg, Got: %s\n", result2 ? result2 : "NULL");

	char str3[] = "abcdefg";
	char to_find3[] = "xyz";
	char *result3 = ft_strnstr(str3, to_find3, 3);
	printf("Expected: NULL, Got: %s\n", result3 ? result3 : "NULL");

	char str4[] = "";
	char to_find4[] = "";
	char *result4 = ft_strnstr(str4, to_find4, 5);
	printf("Expected: NULL, Got: %s\n", result4 ? result4 : "NULL");

	return (0);
}
 */