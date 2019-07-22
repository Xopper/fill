/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 12:43:53 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/24 02:27:25 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)ptr;
	while (n--)
	{
		if (*str++ == (unsigned char)c)
			return ((void *)(str - 0x1));
	}
	return (NULL);
}
