/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:23:26 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/20 21:20:57 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		index;
	char	c1;
	char	*str1;

	str1 = (char *)str;
	index = 0;
	c1 = (char)c;
	while (str1[index] != c1 && str1[index])
		index++;
	if (str1[index] == c1)
		return ((str1 + index));
	return (0);
}
