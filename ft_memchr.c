/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:44:22 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/29 22:24:40 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	index;

	if (n == 0)
		return (0);
	index = 0;
	while (index < n)
	{
		if (((unsigned char *)str)[index] == (unsigned char)c)
			return ((unsigned char *)&str[index]);
		index++;
	}
	return (0);
}
