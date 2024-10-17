/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:46:44 by danperez          #+#    #+#             */
/*   Updated: 2024/10/17 23:57:52 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!s || !*s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}
char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	word_len;

	i = 0;
	str = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!s || !str)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			word_len = 0;
			while (s[word_len] && s[word_len] != c)
				word_len++;
			str[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	str[i] = NULL;
	return (str);
}
/* 
int	main(void)
{
	char	s[] = "Hola Mundo y hola Campus 42!";
	char	c = ' ';
	int		i;
	char	**tokens;
	
	i = 0;
	tokens = ft_split(s, c);
	if (!tokens)
		return (1);
	while (tokens[i])
	{
    	printf("%s\n", tokens[i]);
		free(tokens[i]);
		i++;
	}
	free(tokens);
	return (0);
}
 */