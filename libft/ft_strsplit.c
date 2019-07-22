/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:17:59 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/26 09:00:42 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**o;
	int		i;
	int		l;

	i = 0x0;
	if (!s)
		return (NULL);
	if (!(o = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 0x1))))
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else if (*s != c)
		{
			l = ft_wordlen(s, c);
			o[i++] = ft_strsub(s, 0x0, l);
			s = s + l;
		}
	}
	o[i] = 0x0;
	return (o);
}
