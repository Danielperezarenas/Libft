/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:29:31 by danperez          #+#    #+#             */
/*   Updated: 2024/10/22 00:33:31 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;	
	}
	str[i] = '\0';
	return (str);
}
/* 
char	toupp_or_low(unsigned int i, char c)
{
	if (i % 2 == 0)
		return ft_toupper(c);  // Convertir a mayúscula si el índice es par
	else
		return ft_tolower(c);  // Convertir a minúscula si el índice es impar
}

int	main(void)
{
	
	char	s[] = "Hola Campus 42, Hola mundo!";
	char	*str;

	str = ft_strmapi(s, toupp_or_low);
	printf("Cadena convertida: %s\n", str);
	free(str);
	return (0);
}
 */