/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 18:43:24 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/26 16:37:31 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// ft_strmapi: A function that applies a function to each character of a string,
// returning a new dynamically allocated string with the results.
// The function takes a string and a function pointer as arguments.
// It iterates through the string, applies the function to each character,
// and stores the result in a new string. The new string is null-terminated.
// If the input string or function pointer is NULL, it returns NULL.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*result;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	to_upper_even(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32); // sadece çift index’teki harfleri büyüt
	return (c);
}

int	main(void)
{
	char *original = "libftproject";
	char *mapped = ft_strmapi(original, to_upper_even);

	if (mapped)
	{
		printf("Original: %s\n", original);
		printf("Mapped  : %s\n", mapped);
		free(mapped);
	}
	return (0);
}