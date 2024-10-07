/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:56:04 by danperez          #+#    #+#             */
/*   Updated: 2024/09/30 19:56:04 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies a string from src to dst, prevents overflow adding null-terminator
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(src);
	if (size == 0)
	{
		return (len);
	}
	i = 0;
	while (i < size - 1 && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/* 
int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[20];

 	printf("len: %zu\nSrc: %s\nDest: %s\n", ft_strlcpy(dest, src, 5), src, dest);
	return (0);
}
 */