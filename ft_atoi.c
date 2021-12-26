/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:50:56 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/29 15:11:42 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int		nbr;
	int		n;
	int		i;

	n = 1;
	nbr = 0;
	i = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == '\v'
		|| s[i] == '\f' || s[i] == '\r' || s[i] == ' ')
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			n *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		nbr = (nbr * 10) + (s[i] - '0');
		i++;
	}
	return (nbr * n);
}
