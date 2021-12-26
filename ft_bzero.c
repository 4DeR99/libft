/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:41:09 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/29 17:22:45 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t l)
{
	char	*cpy;
	size_t	cnt;

	cnt = 0;
	cpy = (char *)s;
	while (cnt < l)
	{
		cpy[cnt++] = '\0';
	}
	return ;
}
