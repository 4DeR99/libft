/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moulmado <moulmado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:11:09 by moulmado          #+#    #+#             */
/*   Updated: 2021/11/16 20:11:59 by moulmado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbl;

	nbl = n;
	if (nbl < 0)
	{
		ft_putchar_fd('-', fd);
		nbl = -1 * nbl;
	}
	if (nbl >= 10)
	{
		ft_putnbr_fd(nbl / 10, fd);
		ft_putnbr_fd(nbl % 10, fd);
	}
	else
	{
		ft_putchar_fd(nbl + 48, fd);
	}
}
