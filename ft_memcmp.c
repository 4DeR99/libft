/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:50:16 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/22 00:22:20 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cnt;
	size_t	b;
	char	*s1_c;
	char	*s2_c;

	s1_c = (char *)s1;
	s2_c = (char *)s2;
	b = sizeof(s1_c[0]);
	cnt = 0;
	while (n)
	{
		if (s1_c[cnt] != s2_c[cnt])
			return ((unsigned char)s1_c[cnt] - (unsigned char)s2_c[cnt]);
		cnt++;
		n -= b;
	}
	return (0);
}
