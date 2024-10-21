/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <danperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:33:09 by danperez          #+#    #+#             */
/*   Updated: 2024/10/21 02:34:44 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	reverse(char *str, int len)
{
	char	temp;
	int		start;
	int 	end;

	start = 0;
	end = len - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

static int	numlen(int n)
{
	int len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	is_num_negative(int n)
{
	int	is_negative;

	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	return (is_negative);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		is_negative;

	i = 0;
	if (n == -2147483648)
        return ft_strdup("-2147483648");
	is_negative = is_num_negative(n);
	str = malloc(numlen(n) + 1);
	if (!str)
		return (NULL);
	if (is_negative)
		n = -n;
	if (n == 0)
		str[i++] = '0';
	while (n != 0)
	{
		str[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
		str[i++] = '-';
	str[i] = '\0';
	reverse(str, i);
	return (str);
}

int main(void)
{
    char	*buffer;
    int		number = -2147483648;

    buffer = ft_itoa(number);
    printf("Número convertido: '%s'\n", buffer);
	free(buffer);
    return (0);
}
