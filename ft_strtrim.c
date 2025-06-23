/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:11:30 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/23 17:11:30 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isit(char const *set, int c)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*arr;
	int		len;

	len = ft_strlen(s1);
	while (*s1 != '\0' && ft_isit(set, *s1))
	{
		s1++;
		len--;
	}
	while (len != 0 && ft_isit(set, s1[len - 1]))
		len--;
	arr = ft_substr(s1, 0, len);
	return (arr);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*original = " \t\nHello World! \n\t ";
	char	*set = " \n\t";
	char	*trimmed;

	trimmed = ft_strtrim(original, set);

	if (trimmed)
	{
		printf("Original: \"%s\"\n", original);
		printf("Trimmed:  \"%s\"\n", trimmed);
		free(trimmed);  // malloc ile alındığı için free edilmeli
	}
	else
	{
		printf("Memory allocation failed or input was NULL.\n");
	}

	return (0);
}
