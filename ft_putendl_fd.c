/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:59:48 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/26 17:01:16 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_putendl_fd: A function that writes a string to a file descriptor followed by a newline.
// It iterates through each character of the string and writes it one by one, then writes
// a newline character. If the string is NULL, it does nothing.
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return;

	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

int	main(void)
{
	ft_putendl_fd("Hello, 42 network!", 1); // stdout'a yazar + newline
	return (0);
}
