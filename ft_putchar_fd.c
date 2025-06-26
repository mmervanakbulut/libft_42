/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:03:58 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/26 16:53:27 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_putchar_fd: A function that writes a single character to a file descriptor.
// It uses the write system call to output the character.
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
int	main(void)
{
	ft_putchar_fd('A', 1); // stdout'a 'A' yazar
	ft_putchar_fd('\n', 1); // newline
	return (0);
}