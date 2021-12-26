/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:43:01 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/17 20:28:32 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s0, const char *s1)
{
	int		c0;
	int		c1;
	int		len;
	char	*re;

	if (!s0 || !s1)
		return (0);
	len = ft_strlen(s0) + ft_strlen(s1);
	re = (char *)malloc(len + 1);
	if (!re)
		return (0);
	c0 = 0;
	c1 = 0;
	while (s0[c1])
		re[c0++] = s0[c1++];
	c1 = 0;
	while (s1[c1])
		re[c0++] = s1[c1++];
	re[c0] = '\0';
	return (re);
}
