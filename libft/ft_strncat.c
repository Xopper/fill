/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 21:12:14 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/01 22:51:59 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	char *copy;

	copy = dst;
	while (*dst)
		dst++;
	while (*src && n--)
		*dst++ = *src++;
	*dst = 0x0;
	return (copy);
}
