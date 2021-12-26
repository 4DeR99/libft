/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:02:22 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/20 12:43:15 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words_n(const char *s, char c)
{
	size_t	cnt;
	size_t	o;

	o = 0;
	cnt = 0;
	while (s[o])
	{
		while (s[o] == c)
			o++;
		if (s[o] && s[o] != c)
		{
			cnt++;
			while (s[o] && s[o] != c)
				o++;
		}
	}
	return (cnt);
}

static size_t	find_end(const char *s, char c, int start)
{
	size_t	org;

	org = start;
	while (s[start])
	{
		if ((s[start] != c) && (s[start + 1] == c))
		{
			return (start);
		}
		start++;
	}
	return (start);
}

static char	**freetabs(char **re, int l)
{
	while (l >= 0)
	{
		free (re[l]);
		l--;
	}
	free(re);
	return (re);
}

char	**ft_split(char const *s, char c)
{
	char	**re;
	size_t	i;
	size_t	l;

	if (!s)
		return (0);
	re = (char **)malloc((words_n(s, c) + 1) * sizeof(char *));
	if (!re)
		return (0);
	i = 0;
	l = 0;
	while (s[i] && l < words_n(s, c))
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{			
			re[l++] = ft_substr((s + i), 0, (find_end(s, c, i) - i + 1));
			if (re[l - 1] == NULL)
				return (freetabs(re, l - 2));
		}
		i = find_end(s, c, i) + 1;
	}
	re[l] = NULL;
	return (re);
}
