/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:36:02 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/20 17:49:15 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, const char *set)
{
	char	*re;
	int		start;
	int		end;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] && check((char *)set, (char)s[start]))
		start++;
	while (end > start && check((char *)set, (char)s[end]))
		end--;
	re = (char *)malloc((end - start + 2) * sizeof(char));
	if (!re)
		return (0);
	while (start <= end)
		re[i++] = s[start++];
	re[i] = '\0';
	return (re);
}
