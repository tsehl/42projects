/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_player_start.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:11:08 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 14:03:13 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

void	set_orientation(t_data *data, int orientation)
{
	if (orientation == S_NORTH)
	{
		data->dir_y = -0.99;
		data->plane_x = -0.80;
	}
	if (orientation == S_SOUTH)
	{
		data->dir_y = 0.99;
		data->plane_x = 0.80;
	}
	if (orientation == S_EAST)
	{
		data->dir_x = 0.99;
		data->plane_y = -0.80;
	}
	if (orientation == S_WEST)
	{
		data->dir_x = -0.99;
		data->plane_y = 0.80;
	}
}

void	set_player_pos(t_data *data, int x, int y)
{
	if (data->pos_x != -1)
		ft_error(data, "There can only be one starting position");
	data->pos_x = x + 0.5;
	data->pos_y = y + 0.5;
	set_orientation(data, data->map[y][x]);
	data->map[y][x] = 0;
}

void	search_player_pos(t_data *data)
{
	int	x;
	int	y;
	int	player_set;

	x = 0;
	y = 0;
	player_set = 0;
	while (y < data->map_height)
	{
		while (x < data->map_width)
		{
			if (data->map[y][x] >= S_NORTH)
			{
				set_player_pos(data, x, y);
				player_set = 1;
			}
			x++;
		}
		x = 0;
		y++;
	}
	if (player_set == 0)
		ft_error(data, "No starting position found");
}
