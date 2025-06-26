/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 17:24:22 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/26 16:38:42 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}
	return (0);
}

int	main(void)
{
	char s1[] = "apple";
	char s2[] = "apricot";

	int result = ft_memcmp(s1, s2, 3); // compare first 3 bytes

	if (result < 0)
		printf("s1 is less than s2\n");
	else if (result > 0)
		printf("s1 is greater than s2\n");
	else
		printf("s1 and s2 are equal (in first 3 bytes)\n");

	return 0;
}
