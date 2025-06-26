/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:07:53 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/26 16:37:36 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

int	main(void)
{
	char	buffer[5];
	char	*src = "Hello, world";

	int	len = ft_strlcpy(buffer, src, sizeof(buffer));
	printf("%d\n", len);
	printf("%s\n", buffer);
}