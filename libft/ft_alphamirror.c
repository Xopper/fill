/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alphamirror.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 23:20:39 by ahaloua           #+#    #+#             */
/*   Updated: 2019/05/26 23:29:30 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_alphamirror(char c)
{
	if (ft_islower(c))
		return ('z' - c + 'a');
	else if (ft_isupper(c))
		return ('Z' - c + 'A');
	return (c);
}
