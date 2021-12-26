/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:00:10 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/17 21:00:25 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*re;
	size_t	s_l;
	size_t	i;
	size_t	re_l;

	if (!s)
		return (0);
	s_l = ft_strlen(s);
	if (start >= s_l)
		return (ft_strdup(""));
	if (len > s_l - start)
	{
		len = s_l - start;
		re_l = s_l - start;
	}
	if (len <= s_l - start)
		re_l = len;
	re = (char *)malloc(re_l + 1);
	if (!re)
		return (0);
	i = 0;
	while (s[start] && i < re_l)
		re[i++] = s[start++];
	re[i] = '\0';
	return (re);
}
