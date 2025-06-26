/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 11:41:23 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/26 16:39:12 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c <= 'z' && c >= 'a')
		|| (c <= 'Z' && c >= 'A')
		|| (c <= '9' && c >= '0'))
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_isalnum('|'));
}
