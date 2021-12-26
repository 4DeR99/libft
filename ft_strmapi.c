/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:40:40 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/20 22:08:28 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*re;
	int		i;

	if (!s || !f)
		return (0);
	i = ft_strlen(s);
	re = (char *)malloc((i + 1) * sizeof(char));
	if (!re)
		return (0);
	i = 0;
	while (s[i])
	{
		re[i] = f(i, s[i]);
		i++;
	}
	re[i] = '\0';
	return (re);
}
