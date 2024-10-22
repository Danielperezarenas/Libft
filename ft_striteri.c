/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:18:20 by danperez          #+#    #+#             */
/*   Updated: 2024/10/22 10:15:42 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	
	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/* 
void	to_upper_or_lower(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = ft_toupper(*c);  // Convertir a mayúscula si el índice es par
	else
		*c = ft_tolower(*c);  // Convertir a minúscula si el índice es impar
}

int	main(void)
{
	char	s[] = "Hola mundo y Hola Campus 42";
	
	ft_striteri(s, to_upper_or_lower);
	printf("Cadena cambiada: %s\n", s);
	return (0);
}
*/