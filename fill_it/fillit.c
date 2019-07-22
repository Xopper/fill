/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <ahaloua@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:45:31 by ahaloua           #+#    #+#             */
/*   Updated: 2019/07/22 23:32:29 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_shift(t_tetrim *one)
{
	int		hid;
	t_cord	min;

	hid = 0;
	min.cl = one->hashtab[hid].cl;
	min.ln = one->hashtab[hid].ln;
	while (++hid < 3)
	{
		if (min.cl >= one->hashtab[hid].cl)
			min.cl = one->hashtab[hid].cl;
		if (min.ln >= one->hashtab[hid].ln)
			min.ln = (*one).hashtab[hid].ln;
	}
	hid = 0;
	while (hid < 4)
	{
		one->hashtab[hid].cl -= min.cl;
		one->hashtab[hid].ln -= min.ln;
		hid += 1;
	}
}

void	ft_stock_hashs(char *buff, t_tetrim *one)
{
	int		i;
	int		hid;
	t_cord	var;

	i = 0;
	hid = 0;
	var.ln = 0;
	while (buff[i])
	{
		var.cl = 0;
		while (var.cl < 5 && buff[i])
		{
			if (buff[i] == '#')
			{
				one->hashtab[hid].cl = var.cl;
				one->hashtab[hid].ln = var.ln;
				hid += 1;
			}
			var.cl += 1;
			i += 1;
		}
		var.ln += 1;
	}
}

int		ft_read_tetris(int fd, t_tetris *tab)
{
	char	buf[22];
	int		ret;
	int		id;

	id = 0;
	ret = 21;
	if (read(fd, buf, 0))
		return (0);
	while (ret == 21 && (ret = read(fd, buf, 21)) > 19)
	{
		buf[ret] = '\0';
		if (id == 26 || !ft_check_inlines(buf, ret) || !ft_istertris(buf)
		|| !check_conn(buf))
			return (0);
		else
		{
			tab->multi_tab[id].id = 'A' + id;
			ft_stock_hashs(buf, &tab->multi_tab[id]);
			ft_shift(&tab->multi_tab[id]);
			id += 1;
		}
	}
	tab->multi_tab[id].id = 0;
	return (ret == 20 ? ft_map_size(id) : 0);
}
