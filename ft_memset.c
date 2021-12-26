/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:33:27 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/27 20:52:35 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t l)
{
	unsigned char	*st;
	size_t			i;

	i = 0;
	st = (unsigned char *)s;
	while (i < l)
	{
		st[i++] = c;
	}
	return (s);
}
