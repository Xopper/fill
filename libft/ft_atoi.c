/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 21:19:43 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/26 08:47:44 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		s;
	long	oput;

	oput = 0x0;
	s = 0x1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		s = -0x1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		oput = oput * 0xA + *str - '0';
		str++;
	}
	if (oput < 0x0)
		return (s > 0x0 ? -0x1 : 0x0);
	return (oput * s);
}
