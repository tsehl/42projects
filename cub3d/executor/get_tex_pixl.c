/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tex_pixl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:16:13 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:16:17 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

void	set_tex_pixl(t_data *data, t_tex *img)
{
	if (img->width * data->tex_y + data->tex_x < (img->width * img->height))
		data->color = img->addr[img->width * data->tex_y + data->tex_x];
}

void	get_tex_pixl(t_data *data)
{
	if (data->wall_text == NORTH)
		set_tex_pixl(data, data->text_north);
	else if (data->wall_text == SOUTH)
		set_tex_pixl(data, data->text_south);
	else if (data->wall_text == EAST)
		set_tex_pixl(data, data->text_east);
	else if (data->wall_text == WEST)
		set_tex_pixl(data, data->text_west);
}
