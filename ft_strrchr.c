/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 16:10:01 by musakbul          #+#    #+#             */
/*   Updated: 2025/07/11 19:26:36 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		i;

	tmp = (char *) s;
	i = ft_strlen((const char *) s);
	while (i >= 0)
	{
		if (tmp[i] == (char) c)
		{
			return (tmp + i);
		}
		i--;
	}
	return ((void *)0);
}
