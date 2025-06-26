/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:11:30 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/26 19:23:36 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static int	ft_isit(char const *set, int c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_isit(set, s1[start]))
		start++;
	while (end > start && ft_isit(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

int	main(void)
{
	char	*original = " \t\n Hello World! \n\t ";
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
