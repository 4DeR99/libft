/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 05:36:34 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/17 05:45:02 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*re;
	int		len;
	int		i;

	len = ft_strlen(s);
	re = (char *)malloc(len + 1);
	if (!re)
		return (0);
	i = 0;
	while (s[i])
	{
		re[i] = s[i];
		i++;
	}
	re[i] = '\0';
	return (re);
}
