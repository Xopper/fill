/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:24:30 by ahaloua           #+#    #+#             */
/*   Updated: 2019/06/18 21:20:39 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcspn(const char *s1, const char *s2)
{
	size_t count;

	while (*s2)
	{
		count = 0x0;
		while (s1[count] && s1[count] != *s2)
			count += 0x1;
		if (s1[count] == *s2)
			return (count);
		s2 += 0x1;
	}
	return (count);
}
