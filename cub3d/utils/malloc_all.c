/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_all.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:08:32 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:08:42 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

int	malloc_color(t_data *data)
{
	data->floor = NULL;
	data->ceiling = NULL;
	data->floor = (t_color *)malloc(sizeof(t_color));
	data->ceiling = (t_color *)malloc(sizeof(t_color));
	if (!data->floor || !data->ceiling)
		return (ERROR);
	data->ceiling->r = -1;
	data->ceiling->g = -1;
	data->ceiling->b = -1;
	data->floor->r = -1;
	data->floor->g = -1;
	data->floor->b = -1;
	return (SUCCESS);
}

int	malloc_img(t_data *data)
{
	data->game_img = (t_img *)malloc(sizeof(t_img));
	if (!data->game_img)
		return (ERROR);
	data->game_img->img = NULL;
	return (SUCCESS);
}

int	malloc_textures(t_data *data)
{
	data->text_north = (t_tex *)malloc(sizeof(t_tex));
	data->text_south = (t_tex *)malloc(sizeof(t_tex));
	data->text_east = (t_tex *)malloc(sizeof(t_tex));
	data->text_west = (t_tex *)malloc(sizeof(t_tex));
	if (!data->text_north || !data->text_south || !data->text_east
		|| !data->text_west)
		return (ERROR);
	data->text_north->img = NULL;
	data->text_south->img = NULL;
	data->text_east->img = NULL;
	data->text_west->img = NULL;
	return (SUCCESS);
}

int	malloc_all(t_data *data)
{
	if (malloc_color(data) == ERROR)
		return (ERROR);
	if (malloc_img(data) == ERROR)
		return (ERROR);
	if (malloc_textures(data) == ERROR)
		return (ERROR);
	return (SUCCESS);
}
