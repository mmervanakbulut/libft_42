/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 17:14:04 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/26 16:38:47 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
		{
			return ((void *)ptr);
		}
		ptr++;
		n--;
	}
	return (NULL);
}

int	main()
{
	char data[] = "Hello, world!";
	char target = 'e';
	size_t size = sizeof(data);

	char *result = ft_memchr(data, target, size);

	printf("Character '%c' found at position: %ld\n", target, result - data);
}