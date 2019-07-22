/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 22:09:48 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/28 22:29:34 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int	slen;
	int	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s) - 0x1;
	i = 0x0;
	while (ft_isblank(s[i]) || s[i] == '\n')
		i++;
	while (ft_isblank(s[slen]) || s[slen] == '\n')
		slen--;
	return (ft_strsub(s, i, (slen - i + 0x1) >= 0x0 ? (slen - i + 0x1) : 0x0));
}
