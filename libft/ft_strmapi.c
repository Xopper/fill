/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:00:13 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/28 22:26:24 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	size_t			size;

	i = 0x0;
	if (s)
	{
		size = ft_strlen(s);
		if (!(str = ft_strnew(size)))
			return (NULL);
		else
		{
			while (*s)
			{
				str[i] = f(i, *s++);
				i++;
			}
			str[i] = 0x0;
			return (str);
		}
	}
	return (NULL);
}
