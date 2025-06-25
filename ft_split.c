/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                       :+:      :+:    :+:     */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 18:00:17 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/25 18:00:17 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static size_t	ft_word_count(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_malloc_word(const char *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(end - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	ft_free_all(char **arr, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
		free(arr[i++]);
	free(arr);
}

static int	ft_split_fill(char **res, const char *s, char c)
{
	size_t	i;
	size_t	word_i;
	size_t	start;

	i = 0;
	word_i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			res[word_i] = ft_malloc_word(s, start, i);
			if (!res[word_i])
				return (ft_free_all(res, word_i), 0);
			word_i++;
		}
		else
			i++;
	}
	res[word_i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!result)
		return (NULL);
	if (!ft_split_fill(result, s, c))
		return (NULL);
	return (result);
}

int	main(void)
{
	char	**words = ft_split(" h e l l o  a d a n a", ' ');
	int	i = 0;

	while (words && words[i])
	{
		printf("Word %d: %s\n", i, words[i]);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}