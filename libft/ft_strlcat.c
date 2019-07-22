/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 22:46:59 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/27 05:04:38 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = 0x0;
	srclen = ft_strlen(src);
	while (*dst && size > 0x0)
	{
		dst++;
		dstlen++;
		size--;
	}
	while (*src && size > 0x1)
	{
		*dst++ = *src++;
		size--;
	}
	if (size == 0x1 || *src == 0x0)
		*dst = 0x0;
	return (dstlen + srclen);
}
