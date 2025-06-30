/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:39:33 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/30 16:51:51 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total;
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	total = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	total = nmemb * size;
	ptr = (unsigned char *)malloc(total);
	if (!ptr)
		return (NULL);
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

int	main(void)
{
	size_t	nmemb = 5;
	size_t	size = sizeof(int);
	int	*arr = (int *)ft_calloc(nmemb, size);
	size_t	i = 0;	
	if (arr)
	{
		while (i < nmemb)
		{
			printf("%d ", arr[i]);
			i++;
		}
		free(arr);
	}
	else
	{
		printf("Memory allocation failed.");
	}
}