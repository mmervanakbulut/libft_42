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

void	*ft_memmove(void *to, const void *from, size_t numBytes)
{
	unsigned char		*t;
	const unsigned char	*f;

	if (!to && !from)
		return (NULL);
	t = (unsigned char *)to;
	f = (const unsigned char *)from;
	if (f > t)
		ft_memcpy(t, f, numBytes);
	else
	{
		t += numBytes;
		f += numBytes;
		while (numBytes > 0)
		{
			t--;
			f--;
			*t = *f;
			numBytes--;
		}
	}
	return (to);
}
