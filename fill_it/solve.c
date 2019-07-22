/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <ahaloua@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:55:27 by ahaloua           #+#    #+#             */
/*   Updated: 2019/07/22 19:32:18 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_is_safe(char **map, t_tetrim *one, t_cord *var, int size)
{
	int i;
	int m;
	int n;

	i = -1;
	while (++i < 4)
	{
		m = one->hashtab[i].cl + var->cl;
		n = one->hashtab[i].ln + var->ln;
		if (m >= size || m < 0)
			return (0);
		if (n >= size || n < 0)
			return (0);
		if (map[n][m] != '.')
			return (0);
	}
	i = -1;
	while (++i < 4)
	{
		m = one->hashtab[i].cl + var->cl;
		n = one->hashtab[i].ln + var->ln;
		map[n][m] = one->id;
	}
	return (1);
}

void	ft_rm_tetri(char **map, char c, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (map[i][j] == c)
				map[i][j] = '.';
			j += 1;
		}
		i += 1;
	}
}

int		ft_solve(char **map, t_tetrim *one, int size)
{
	t_cord var;

	var.ln = 0;
	if (one->id == 0)
		return (1);
	while (var.ln < size)
	{
		var.cl = 0;
		while (var.cl < size)
		{
			if (ft_is_safe(map, one, &var, size))
			{
				if (ft_solve(map, &one[1], size))
					return (1);
				else
					ft_rm_tetri(map, one->id, size);
			}
			var.cl++;
		}
		var.ln++;
	}
	return (0);
}
