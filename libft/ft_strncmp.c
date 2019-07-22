/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 18:16:32 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/26 08:48:24 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n--)
	{
		if (*s1++ == *s2++)
			continue ;
		else
			return ((unsigned char)*(s1 - 0x1) - (unsigned char)*(s2 - 0x1));
	}
	return (0x0);
}
