/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 19:01:30 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/26 08:49:12 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n;

	if (*needle == 0x0)
		return ((char *)haystack);
	n = ft_strlen(needle);
	while (*haystack && n <= len--)
	{
		if (ft_memcmp(haystack++, needle, n) == 0x0)
			return ((char *)(haystack - 0x1));
	}
	return (NULL);
}
