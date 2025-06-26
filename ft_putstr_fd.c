/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:58:14 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/26 17:01:32 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_putstr_fd: A function that writes a string to a file descriptor.
// It iterates through each character of the string and writes it one by one.
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return;

	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

int	main(void)
{
	ft_putstr_fd("Hello, 42!\n", 1); // stdout'a yazar
	return (0);
}
