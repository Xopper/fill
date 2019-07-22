/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 18:09:39 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/24 02:26:27 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s > d)
		ft_memcpy(dst, src, len);
	else if (s < d)
	{
		d = d + len - 0x1;
		s = s + len - 0x1;
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
