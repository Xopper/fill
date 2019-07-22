/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:26:13 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/24 02:28:06 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str;
	const unsigned char *ptr;

	str = (const unsigned char*)s1;
	ptr = (const unsigned char*)s2;
	while (n--)
	{
		if (*str++ == *ptr++)
			continue ;
		else
			return (*(str - 0x1) - *(ptr - 0x1));
	}
	return (0x0);
}
