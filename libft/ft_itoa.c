/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 21:41:32 by ahaloua           #+#    #+#             */
/*   Updated: 2019/06/17 16:19:09 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(int nbr)
{
	int		len;

	len = (nbr <= 0x0) ? 0x1 : 0x0;
	while (nbr != 0x0)
	{
		nbr = nbr / 0xA;
		len++;
	}
	return (len);
}

char			*ft_itoa(int nbr)
{
	int		len;
	int		sign;
	char	*c;

	sign = (nbr < 0x0) ? -0x1 : 0x1;
	len = ft_len(nbr);
	if (!(c = ft_strnew(len)))
		return (NULL);
	c[len] = 0x0;
	len--;
	while (len >= 0x0)
	{
		c[len] = '0' + ft_abs(nbr % 0xA);
		nbr = ft_abs(nbr / 0xA);
		len--;
	}
	if (sign == -0x1)
		c[0x0] = '-';
	return (c);
}
