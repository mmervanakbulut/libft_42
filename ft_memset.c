/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:22:29 by musakbul          #+#    #+#             */
/*   Updated: 2025/05/30 15:22:29 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (len > 0)
	{
		*p = value;
		p++;
		len--;
	}
	return (ptr);
}

int	main(void)
{
	char arr[10] = "theText";
	int	arr1[2] = {123, 456};
	printf("%s\n", arr);
	printf("%d\n", arr1[0]);
	ft_memset(arr1, 1, 2);
	ft_memset(arr1, 1, 1);
	printf("%d\n", arr1[0]);
	printf("%d\n", arr1[1]);
	ft_memset(arr, 99, 4);
	printf("%.*s\n", 10, arr);
}
