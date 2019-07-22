/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <ahaloua@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:55:27 by ahaloua           #+#    #+#             */
/*   Updated: 2019/07/22 23:33:30 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_is_safe(char **map, t_tetrim *one, t_cord *var, int size)
{
	int		i;
	t_cord	v;

	i = -1;
	while (++i < 4)
	{
		v.cl = one->hashtab[i].cl + var->cl;
		v.ln = one->hashtab[i].ln + var->ln;
		if (v.cl >= size || v.cl < 0)
			return (0);
		if (v.ln >= size || v.ln < 0)
			return (0);
		if (map[v.ln][v.cl] != '.')
			return (0);
	}
	i = -1;
	while (++i < 4)
	{
		v.cl = one->hashtab[i].cl + var->cl;
		v.ln = one->hashtab[i].ln + var->ln;
		map[v.ln][v.cl] = one->id;
	}
	return (1);
}

void	ft_rm_tetri(char **map, char c, int size)
{
	t_cord var;

	var.cl = 0;
	while (var.cl < size)
	{
		var.ln = 0;
		while (var.ln < size)
		{
			if (map[var.cl][var.ln] == c)
				map[var.cl][var.ln] = '.';
			var.ln += 1;
		}
		var.cl += 1;
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
