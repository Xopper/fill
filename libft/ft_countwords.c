/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 05:50:50 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/24 08:10:51 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, int c)
{
	int words;

	words = 0x0;
	while (*str)
	{
		if (*str != c && *str)
		{
			while (*str != c && *str)
				str++;
			words++;
		}
		while (*str == c)
			str++;
	}
	return (words);
}
