/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:33:10 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/23 16:33:10 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*joined;
	int		i;
	int		j;

	j = ft_strlen(s2);
	i = ft_strlen(s1);
	joined = (char *)malloc(i + j + 1);
	if (joined == NULL)
		return (NULL);
	ft_memcpy(joined, s1, i);
	ft_memcpy(joined + i, s2, j);
	joined[i + j] = '\0';
	return (joined);
}

int	main(void)
{
	char	*s1 = "Hello, ";
	char	*s2 = "world!";
	char	*result = ft_strjoin(s1, s2);

	printf("%s", result);
	free(result);
}
