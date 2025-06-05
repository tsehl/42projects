/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minilibx_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:16:21 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:16:23 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

int	mlx_img_init(t_data *data)
{
	data->game_img->img = mlx_new_image(data->mlx, data->screen_width,
			data->screen_height);
	data->game_img->addr = mlx_get_data_addr(data->game_img->img,
			&data->game_img->bits_per_pixel, &data->game_img->line_length,
			&data->game_img->endian);
	return (SUCCESS);
}

int	minilibx_init(t_data *data)
{
	data->mlx = mlx_init();
	if (!data->mlx)
		return (ERROR);
	data->win = mlx_new_window(data->mlx, data->screen_width,
			data->screen_height, "cube");
	if (!data->win)
		return (ERROR);
	if (mlx_img_init(data) != SUCCESS)
		return (ERROR);
	if (ft_charge_textures(data) != SUCCESS)
		return (ERROR);
	return (SUCCESS);
}
