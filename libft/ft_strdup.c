/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 14:29:25 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/24 02:28:51 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*str;

	len = ft_strlen(src);
	if (!(str = (char *)malloc(len + 0x1)))
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}
