/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 04:19:51 by danperez          #+#    #+#             */
/*   Updated: 2024/10/23 23:24:33 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	subs = malloc(len + 1);
	if (!subs)
		return (NULL);
	while (j <= len && s[i] != '\0')
		{
			subs[j] = s[i];
			j++;
			i++;
		}
	subs[j] = '\0';
	return (subs);
}
/*
int	main(void)
{
	const char	s[15] = "Hola Campus!";
	char	*substr;

	substr = ft_substr(s, 5, 13);
	printf("String: %s\nSubstring: %s\n", s, substr);
	free(substr);
	return (0);
}
*/