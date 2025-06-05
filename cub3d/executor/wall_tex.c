/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wall_tex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:18:44 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 14:05:30 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

int	ft_get_tex_width(t_data *data)
{
	int	width;

	width = 64;
	if (data->wall_text == NORTH)
		return (data->text_north->width);
	if (data->wall_text == SOUTH)
		return (data->text_south->width);
	if (data->wall_text == EAST)
		return (data->text_east->width);
	if (data->wall_text == WEST)
		return (data->text_west->width);
	return (width);
}

void	wall_tex(t_data *data)
{
	double	wall_x;
	int		width;

	width = ft_get_tex_width(data);
	if (data->side == 0)
		wall_x = data->pos_y - data->wall_dist * data->ray_dir_y;
	else
		wall_x = data->pos_x - data->wall_dist * data->ray_dir_x;
	wall_x -= (int)wall_x;
	data->tex_x = (int)(wall_x * width);
	if (data->side == 0)
		data->tex_x = width + data->tex_x;
	else
		data->tex_x = width + data->tex_x - 1;
	data->step_tex = 1 * width / data->line_height;
	data->tex_pos = (data->draw_start - data->screen_height / 2
			+ data->line_height / 2) * data->step_tex -1;
}
