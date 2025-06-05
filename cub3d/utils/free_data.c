/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:07:44 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:07:47 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

void	ft_free_matrice(char **matrice)
{
	int	i;

	i = 0;
	if (!matrice)
		return ;
	while (matrice[i])
	{
		if (matrice[i])
			free(matrice[i]);
		i++;
	}
	if (matrice)
		free(matrice);
}

void	ft_free_map(t_data *data)
{
	int	i;

	i = 0;
	if (data->map)
	{
		while (i < data->map_height)
		{
			if (data->map[i])
				free(data->map[i]);
			i++;
		}
		free(data->map);
	}
}

void	destroy_textures(t_data *data)
{
	if (data->text_north)
	{
		if (data->text_north->img)
			mlx_destroy_image(data->mlx, data->text_north->img);
		free(data->text_north);
	}
	if (data->text_south)
	{
		if (data->text_south->img)
			mlx_destroy_image(data->mlx, data->text_south->img);
		free(data->text_south);
	}
	if (data->text_east)
	{
		if (data->text_east->img)
			mlx_destroy_image(data->mlx, data->text_east->img);
		free(data->text_east);
	}
	if (data->text_west)
	{
		if (data->text_west->img)
			mlx_destroy_image(data->mlx, data->text_west->img);
		free(data->text_west);
	}	
}

void	destroy_image(t_data *data)
{
	if (data->game_img)
	{
		if (data->game_img->img)
			mlx_destroy_image(data->mlx, data->game_img->img);
		free(data->game_img);
	}
}

void	free_data(t_data *data)
{
	if (data->floor)
		free(data->floor);
	if (data->ceiling)
		free(data->ceiling);
	if (data->path_north)
		free(data->path_north);
	if (data->path_south)
		free(data->path_south);
	if (data->path_east)
		free(data->path_east);
	if (data->path_west)
		free(data->path_west);
	destroy_image(data);
	destroy_textures(data);
	if (data->win)
		mlx_destroy_window(data->mlx, data->win);
	if (data->file_content)
		ft_free_matrice(data->file_content);
	if (data->map)
		ft_free_map(data);
}
