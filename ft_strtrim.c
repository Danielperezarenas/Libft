/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:07:35 by danperez          #+#    #+#             */
/*   Updated: 2024/10/15 15:41:02 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1) - 1;
	str = malloc(ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}
/* 
int	main(void)
{
	char const	s1[] = "Hola Campus 42!";
	char const	set[] = "Hola!";
	char	*ptr;

	ptr = ft_strtrim(s1, set);
	printf("Strtrim: '%s'\n", ptr);
	free(ptr);
	return (0);
}
 */