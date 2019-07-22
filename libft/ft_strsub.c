/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 16:28:14 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/26 08:56:57 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s)
	{
		i = 0x0;
		if (!(str = ft_strnew(len)))
			return (NULL);
		while (len--)
		{
			str[i] = s[start];
			i++;
			start++;
		}
		str[i] = 0x0;
		return (str);
	}
	return (NULL);
}
