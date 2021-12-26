/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:02:22 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/10 19:11:34 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cnt;

	cnt = 0;
	while (n)
	{
		if (!s1[cnt] || !s2[cnt] || s1[cnt] != s2[cnt])
			return ((unsigned char)s1[cnt] - (unsigned char)s2[cnt]);
		cnt++;
		n--;
	}
	return (0);
}
