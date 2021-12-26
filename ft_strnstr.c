/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:12:40 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/25 15:14:43 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s0, const char *s1, size_t len)
{
	size_t	index0;
	size_t	index1;
	size_t	index2;

	index0 = 0;
	if (!s1[0])
		return ((char *)s0);
	while (s0[index0] && index0 < len)
	{
		index1 = 0;
		index2 = index0;
		while ((s0[index2] == s1[index1]) && (index2 < len))
		{
			index1++;
			index2++;
			if (!s1[index1])
				return ((char *)(s0 + index0));
		}
		index0++;
	}		
	return (0);
}
