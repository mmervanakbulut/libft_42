/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:39:19 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/26 16:39:42 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
}

int	main(void)
{
	char	*str;

	str = "deneme 123";
	printf("%s\n", str);
	ft_bzero(str, 4);
	printf("%s\n", str);
	return (0);
}
