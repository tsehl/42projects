/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:43:26 by thsehl            #+#    #+#             */
/*   Updated: 2023/02/02 10:59:49 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_bc_next(t_map *omap, t_map *map)
{
	omap->pos_x = 0;
	omap->pos_y = 0;
	while (omap->pos_x < map->height
		&& map->board[omap->pos_x][omap->pos_y] != 'P')
	{
		omap->pos_y = 0;
		while (map->board[omap->pos_x][omap->pos_y]
				&& map->board[omap->pos_x][omap->pos_y] != 'P')
			omap->pos_y++;
		if (map->board[omap->pos_x][omap->pos_y] != 'P')
			omap->pos_x++;
	}
}

int	init_bc(t_map *omap)
{
	int		winnable;
	t_map	*map;
	char	**cmap;

	map = malloc(sizeof(t_map));
	if (!map)
		return (-1);
	map->width = omap->width;
	map->height = omap->height;
	map->board = ft_cpy_tab(omap->board, map->height);
	if (!map->board)
		return (ft_free_map(map));
	init_bc_next(omap, map);
	cmap = ft_cpy_tab(map->board, map->height);
	if (!cmap)
	{
		ft_free_tab(cmap, map->height);
		return (-1);
	}
	if (map->board[omap->pos_x][omap->pos_y] == 'P')
		backtracking(map, cmap, omap->pos_x, omap->pos_y);
	winnable = ft_winnable(map);
	ft_free_tab(cmap, map->height + 1);
	ft_free_map(map);
	return (winnable);
}

void	backtracking_utils(t_map *map, char **cmap, int pos_y, int pos_x)
{
	if (cmap[pos_y][pos_x] == 'C' || cmap[pos_y][pos_x] == 'E')
			map->board[pos_y][pos_x] = '0';
		cmap[pos_y][pos_x] = '1';
}

void	backtracking(t_map *map, char **cmap, int pos_y, int pos_x)
{
	if (cmap[pos_y - 1][pos_x] != '1')
	{
		backtracking_utils(map, cmap, pos_y, pos_x);
		backtracking(map, cmap, pos_y - 1, pos_x);
	}
	if (cmap[pos_y][pos_x + 1] != '1')
	{
		backtracking_utils(map, cmap, pos_y, pos_x);
		backtracking(map, cmap, pos_y, pos_x + 1);
	}
	if (cmap[pos_y + 1][pos_x] != '1')
	{
		backtracking_utils(map, cmap, pos_y, pos_x);
		backtracking(map, cmap, pos_y + 1, pos_x);
	}
	if (cmap[pos_y][pos_x - 1] != '1')
	{
		backtracking_utils(map, cmap, pos_y, pos_x);
		backtracking(map, cmap, pos_y, pos_x - 1);
	}
	if (cmap[pos_y][pos_x] == 'C' || cmap[pos_y][pos_x] == 'E')
			map->board[pos_y][pos_x] = '0';
	cmap[pos_y][pos_x] = '1';
}

int	ft_winnable(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < map->height)
	{
		j = 0;
		while (map->board[i][j])
		{
			if (map->board[i][j] == 'C' || map->board[i][j] == 'E')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
