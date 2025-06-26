/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 18:15:39 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/26 16:38:54 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_intlen(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		n = -n;
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	size_t	len;

	nb = (long)n;
	len = ft_intlen(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

int	main(void)
{
	int	values[] = {0, -42, 12345, -2147483648, 2147483647};
	for (int i = 0; i < 5; i++)
	{
		char *str = ft_itoa(values[i]);
		if (str)
		{
			printf("%d -> \"%s\"\n", values[i], str);
			free(str);
		}
	}
	return (0);
}