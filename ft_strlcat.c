/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:16:41 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/10 13:44:07 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	c1;
	size_t	c2;
	size_t	re;

	re = ft_strlen((char *)src) + ft_strlen(dest);
	c2 = 0;
	c1 = ft_strlen(dest);
	if (c1 > (size - 1) || !size)
		return (size + ft_strlen((char *)src));
	while (src[c2] && (c1 < (size - 1)))
		dest[c1++] = src[c2++];
	dest[c1] = '\0';
	return (re);
}
