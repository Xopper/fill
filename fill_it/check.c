/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <ahaloua@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 16:27:46 by ahaloua           #+#    #+#             */
/*   Updated: 2019/07/22 23:03:58 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_istertris(const char *str)
{
	int	hashs;
	int	dots;
	int	i;

	hashs = 0;
	dots = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			hashs += 1;
		else if (str[i] == '.')
			dots += 1;
		i += 1;
	}
	if (hashs == 4 && dots == 12)
		return (1);
	return (0);
}

int		check_conn(const char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			if (i < 19 && str[i + 1] == '#')
				j += 1;
			if (i < 14 && str[i + 5] == '#')
				j += 1;
		}
		i += 1;
	}
	if (j == 3 || j == 4)
		return (1);
	return (0);
}

int		ft_check_inlines(const char *str, int r)
{
	int i;

	i = 4;
	while (i < 20)
	{
		if (str[i] != '\n')
			return (0);
		i += 5;
	}
	return ((r == 21 && str[20] == '\n') || r == 20);
}

void	ft_error(void)
{
	ft_putendl("error");
	exit(0);
}
