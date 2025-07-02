/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 12:15:52 by musakbul          #+#    #+#             */
/*   Updated: 2025/07/02 19:56:31 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_forward(unsigned char *t,
	const unsigned char *f,
	size_t bytes)
{
	while (bytes > 0)
	{
		*t = *f;
		t++;
		f++;
		bytes--;
	}
}

static void	copy_backward(unsigned char *t,
	const unsigned char *f,
	size_t bytes)
{
	t += bytes;
	f += bytes;
	while (bytes > 0)
	{
		t--;
		f--;
		*t = *f;
		bytes--;
	}
}

void	*ft_memmove(void *to, const void *from, size_t numBytes)
{
	unsigned char		*t;
	const unsigned char	*f;

	t = (unsigned char *)to;
	f = (const unsigned char *)from;
	if (f > t)
		copy_forward(t, f, numBytes);
	else
		copy_backward(t, f, numBytes);
	return (to);
}
