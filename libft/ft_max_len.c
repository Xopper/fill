/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 20:12:57 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/23 06:00:39 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_max_len(const char *s1, const char *s2)
{
	size_t s1len;
	size_t s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	return (s1len > s2len ? s1len : s2len);
}
