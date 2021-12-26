/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:36:31 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/29 21:47:23 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (len--)
			*(char *)(dest + len) = *(char *)(src + len);
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
