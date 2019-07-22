/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <ahaloua@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:58:10 by ahaloua           #+#    #+#             */
/*   Updated: 2019/07/22 22:47:12 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_free_map(char **map)
{
	int i;

	i = 0;
	if (map == NULL)
		return ;
	while (map[i])
	{
		ft_memdel((void **)&(map)[i]);
		i++;
	}
	ft_memdel((void **)&map);
}

void	ft_putmap(char **map)
{
	int i;

	i = 0;
	if (map == NULL)
		return ;
	while (map[i])
	{
		ft_putendl(map[i]);
		i++;
	}
}

void	ft_creat_map(char ***map, int size)
{
	int	i;

	i = 0;
	if (*map != NULL)
		ft_free_map(*map);
	if (!(*map = (char **)ft_memalloc(sizeof(char *) * (size + 1))))
		return ;
	else
	{
		while (i < size)
		{
			(*map)[i] = ft_strnew(size);
			(*map)[i] = ft_memset((*map)[i], '.', size);
			i += 1;
		}
	}
}

int		ft_map_size(int nb)
{
	nb *= 4;
	while (ft_sqrt(nb) == 0 || ft_sqrt(nb) < 2)
		nb++;
	return (ft_sqrt(nb));
}
