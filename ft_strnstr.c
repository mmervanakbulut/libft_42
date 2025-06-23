/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 19:04:18 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/01 19:04:18 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack [i] == needle[0])
		{
			while (needle[j] && haystack[i + j] && (i + j) < len)
			{
				if (haystack[i + j] != needle[j])
					break;
				j++;
			}
			if (!needle[j])
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

int	main()
{
	const char	*haystack = "adana merkez";
	const char	*needle = "merk";
	size_t	len = 9;

	char	*result = ft_strnstr(haystack, needle, len);

	printf("%s", result);
}