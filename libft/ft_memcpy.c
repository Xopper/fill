/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 13:39:00 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/27 05:16:27 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*idst;
	unsigned char	*isrc;

	idst = (unsigned char *)dst;
	isrc = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*idst++ = *isrc++;
	return (dst);
}
