/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:33:10 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/26 19:34:22 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len1;
	size_t	len2;
	size_t	i;

	if (!s1 && !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined = (char *)malloc(len1 + len2 + 1);
	if (!joined)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		joined[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		joined[i] = s2[i - len1];
		i++;
	}
	joined[i] = '\0';
	return (joined);
}

int	main(void)
{
	char	*s1 = "Hello, ";
	char	*s2 = "world!";
	char	*result = ft_strjoin(s1, s2);

	printf("%s", result);
}
