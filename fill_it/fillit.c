/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <ahaloua@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:45:31 by ahaloua           #+#    #+#             */
/*   Updated: 2019/07/22 15:22:52 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_shift(t_tetrim *one)
{
	int hid;
	int count;
	int mincl;
	int minln;

	hid = 0;
	count = 0;
	mincl = one->hashtab[hid].cl;
	minln = one->hashtab[hid].ln;
	while (++hid < 3)
	{
		if (mincl >= one->hashtab[hid].cl)
			mincl = one->hashtab[hid].cl;
		if (minln >= one->hashtab[hid].ln)
			minln = (*one).hashtab[hid].ln;
	}
	while (count < 4)
	{
		one->hashtab[count].cl -= mincl;
		one->hashtab[count].ln -= minln;
		count++;
	}
}

void	ft_stock_hashs(char *buff, t_tetrim *one)
{
	int i;
	int hid;
	int x;
	int y;

	i = 0;
	y = 0;
	hid = 0;
	while (buff[i])
	{
		x = 0;
		while (x < 5 && buff[i])
		{
			if (buff[i] == '#')
			{
				one->hashtab[hid].cl = x;
				one->hashtab[hid].ln = y;
				hid++;
			}
			x++;
			i++;
		}
		y++;
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
			ft_error();
		else
		{
			tab->multi_tab[id].id = 'A' + id;
			ft_stock_hashs(buf, &tab->multi_tab[id]);
			ft_shift(&tab->multi_tab[id]);
			id++;
		}
	}
	tab->multi_tab[id].id = 0;
	return (ret == 20 ? ft_map_size(id) : 0);
}
