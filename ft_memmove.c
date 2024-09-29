/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:57:51 by danperez          #+#    #+#             */
/*   Updated: 2024/09/27 13:44:54 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Similar to memcpy() ensures that the copy is performed correctly
// even when the memory areas src and dest overlap.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s && d < s + n)
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
/* 
int main(void)
{
	const unsigned char *src = (const unsigned char *)"Hola mundo!";
	unsigned char dest[20];

	ft_memmove(dest, src, 11);
	dest[11] = '\0';
	printf("Dest: %s\n", dest);
	return (0);
}
 */