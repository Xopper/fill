/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 01:38:00 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/28 22:32:52 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0x0)
	{
		if (n <= -0xA)
			ft_putnbr_fd(n / 0xA, fd);
		else
			ft_putchar_fd('-', fd);
		ft_putchar_fd((n % 0xA) * -0x1 + '0', fd);
	}
	else
	{
		if (n >= 0xA)
			ft_putnbr_fd(n / 0xA, fd);
		ft_putchar_fd(n % 0xA + '0', fd);
	}
}
