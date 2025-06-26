/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 10:43:44 by musakbul          #+#    #+#             */
/*   Updated: 2025/06/26 16:39:08 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c);

int	main(void)
{
	printf("%d", ft_isalpha(1));
}

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c <= 122 && c >= 97))
	{
		return (1);
	}
	return (0);
}
