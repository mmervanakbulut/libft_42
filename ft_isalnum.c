/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 11:41:23 by musakbul          #+#    #+#             */
/*   Updated: 2025/05/28 12:42:28 by musakbul         ###   ########.fr       */
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
