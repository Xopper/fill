/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 19:40:08 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/26 08:55:53 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1len;
	size_t	s2len;

	if (s1 && s2)
	{
		s1len = ft_strlen(s1);
		s2len = ft_strlen(s2);
		if (!(ptr = ft_strnew(s1len + s2len)))
			return (NULL);
		ft_strclr(ptr);
		ft_strcat(ptr, s1);
		ft_strcat(ptr, s2);
		return (ptr);
	}
	return (NULL);
}
