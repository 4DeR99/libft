/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:48:58 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/29 21:47:32 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t l)
{
	size_t	c;

	if (!dst && !src)
		return (NULL);
	c = 0;
	while (c < l)
	{
		*(char *)(dst + c) = *(char *)(src + c);
		c++;
	}
	return (dst);
}
