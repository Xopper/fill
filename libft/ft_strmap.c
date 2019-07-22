/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:48:08 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/26 08:58:16 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	size_t	i;
	size_t	size;
	char	*str;

	if (s)
	{
		size = ft_strlen(s);
		if (!(str = ft_strnew(size)))
			return (NULL);
		else
		{
			i = 0x0;
			while (s[i])
			{
				str[i] = f(s[i]);
				i++;
			}
			str[i] = 0x0;
			return (str);
		}
	}
	return (NULL);
}
