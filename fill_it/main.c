/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloua <ahaloua@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:45:42 by ahaloua           #+#    #+#             */
/*   Updated: 2019/07/22 16:45:14 by ahaloua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char		**map;
	t_tetris	*tab;
	int			size;
	int			fd;

	map = NULL;
	size = 0;
	if (argc == 2)
	{
		tab = (t_tetris *)ft_memalloc(sizeof(t_tetris));
		fd = open(argv[argc - 1], O_RDONLY);
		if (!(size = ft_read_tetris(fd, tab)))
			ft_error();
		ft_creat_map(&map, size);
		while (ft_solve(map, &tab->multi_tab[0], size) == 0)
			ft_creat_map(&map, ++size);
		ft_putmap(map);
		ft_free_map(map);
		ft_memdel((void **)&tab);
		return (0);
	}
	ft_usage();
	return (0);
}

void	ft_usage(void)
{
	ft_putendl("usage: ./fillit input_file");
	exit(0);
}
