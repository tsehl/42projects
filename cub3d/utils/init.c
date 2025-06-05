/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:08:09 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:08:12 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

void	set_data_to_null(t_data *data)
{
	data->floor = NULL;
	data->ceiling = NULL;
	data->text_north = NULL;
	data->text_south = NULL;
	data->text_east = NULL;
	data->text_west = NULL;
	data->game_img = NULL;
	data->path_north = NULL;
	data->path_south = NULL;
	data->path_east = NULL;
	data->path_west = NULL;
	data->map = NULL;
	data->file_content = NULL;
}

void	set_x_y_data(t_data *data)
{
	data->pos_x = -1;
	data->pos_y = -1;
	data->dir_x = 0;
	data->dir_y = 0;
	data->plane_x = 0;
	data->plane_y = 0;
}

void	init(t_data *data)
{
	set_data_to_null(data);
	set_x_y_data(data);
	data->mlx = NULL;
	data->win = NULL;
	data->map_height = 0;
	data->map_width = 0;
	data->speed = 0.1;
	data->wall_text = 0;
	data->move_up = 0;
	data->move_down = 0;
	data->move_left = 0;
	data->move_right = 0;
	data->rotate_left = 0;
	data->rotate_right = 0;
	data->hit = 0;
	data->side = 0;
	data->screen_height = SCREEN_HEIGHT;
	data->screen_width = SCREEN_WIDTH;
	if (data->screen_height <= 0 || data->screen_width <= 0)
		ft_error(data, "Screen size must be bigger than 0");
}
