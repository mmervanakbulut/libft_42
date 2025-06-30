/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:58:49 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/30 17:38:54 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	src_size = (unsigned int)ft_strlen(src);
	dest_size = (unsigned int)ft_strlen(dest);
	i = 0;
	if (size <= dest_size)
	{
		return (size + src_size);
	}
	while (src[i] && (dest_size + i) < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}

int	main()
{
	char dest[25] = "elma";
	char src[] = "denizli";
	printf("%s\n", src);
	printf("%zu\n", ft_strlcat(dest, src, 4));
	printf("%s\n", src);
	printf("%s\n", dest);
}
