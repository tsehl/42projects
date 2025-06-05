/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:16:26 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:16:28 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

void	rotate(t_data *data, int advance)
{
	double	dir;
	double	plane;

	dir = data->dir_x;
	plane = data->plane_x;
	data->dir_x = data->dir_x * cos(advance * data->speed)
		- data->dir_y * sin(advance * data->speed);
	data->dir_y = dir * sin(advance * data->speed) + data->dir_y
		* cos(advance * data->speed);
	data->plane_x = data->plane_x * cos(advance * data->speed)
		- data->plane_y * sin(advance * data->speed);
	data->plane_y = plane * sin(advance * data->speed)
		+ data->plane_y * cos(advance * data->speed);
}

void	move_left_right(t_data *data)
{
	if (data->move_left == 1)
	{
		if (data->map[(int)(data->pos_y - data->dir_x * data->speed)]
			[(int)(data->pos_x)] != 1)
			data->pos_y += -data->dir_x * data->speed;
		if (data->map[(int)data->pos_y]
			[(int)(data->pos_x + data->dir_y * data->speed)] != 1)
			data->pos_x += data->dir_y * data->speed;
	}
	if (data->move_right == 1)
	{
		if (data->map[(int)(data->pos_y + data->dir_x * data->speed)]
			[(int)(data->pos_x)] != 1)
			data->pos_y -= -data->dir_x * data->speed;
		if (data->map[(int)data->pos_y]
			[(int)(data->pos_x - data->dir_y * data->speed)] != 1)
			data->pos_x -= data->dir_y * data->speed;
	}
}

void	move_down_up(t_data *data)
{
	if (data->move_up == 1)
	{
		if (data->map[(int)(data->pos_y)]
			[(int)(data->pos_x + data->dir_x * data->speed)] != 1)
			data->pos_x += data->dir_x * data->speed;
		if (data->map[(int)(data->pos_y + data->dir_y * data->speed)]
			[(int)(data->pos_x)] != 1)
			data->pos_y += data->dir_y * data->speed;
	}
	if (data->move_down == 1)
	{
		if (data->map[(int)(data->pos_y)]
			[(int)(data->pos_x - data->dir_x * data->speed)] != 1)
			data->pos_x -= data->dir_x * data->speed;
		if (data->map[(int)(data->pos_y - data->dir_y * data->speed)]
			[(int)(data->pos_x)] != 1)
			data->pos_y -= data->dir_y * data->speed;
	}
}

void	move(t_data *data)
{
	if (data->move_up == 1 || data->move_down == 1)
		move_down_up(data);
	if (data->move_left == 1 || data->move_right == 1)
		move_left_right(data);
	if (data->rotate_left == 1)
		rotate(data, -1);
	if (data->rotate_right == 1)
		rotate(data, 1);
}
