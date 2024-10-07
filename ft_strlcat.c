/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:32:52 by danperez          #+#    #+#             */
/*   Updated: 2024/10/04 15:28:08 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Concatenate two strings, prevents overflow adding the null-terminator
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	while (j < size - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i + j);
}
/* 
int	main(void) {
	char	destination[50] = "Hello, ";
	char	source[] = "world!";
	int	len;

	len = ft_strlcat(destination, source, 4);
	printf("%d\n", len);

	return (0);
}
 */