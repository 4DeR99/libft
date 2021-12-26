/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:14:45 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/09 15:17:34 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	c1;
	size_t	c2;

	c1 = 0;
	c2 = 0;
	while (src[c1])
		c1++;
	if (size > 0)
	{
		while (src[c2] && (c2 < (size - 1)))
		{
			dest[c2] = src[c2];
			c2++;
		}
		dest[c2] = '\0';
	}
	return (c1);
}
