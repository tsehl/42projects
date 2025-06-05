/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:09:44 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 14:28:21 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

int	is_border(t_data *data, int x, int y)
{
	if (x == 0 || x == data->map_width - 1)
		return (1);
	if (y == 0 || y == data->map_height -1)
		return (1);
	return (0);
}

int	check_around(t_data *data, int x, int y)
{
	if (data->map[y][x - 1] == -1)
		return (1);
	if (data->map[y][x + 1] == -1)
		return (1);
	if (data->map[y - 1][x] == -1)
		return (1);
	if (data->map[y + 1][x] == -1)
		return (1);
	return (0);
}

void	check_map(t_data *data)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < data->map_height)
	{
		while (x < data->map_width)
		{
			if (data->map[y][x] == 0)
			{
				if (is_border(data, x, y) == 1)
					ft_error_map_wall(data);
				if (check_around(data, x, y) == 1)
					ft_error_map_wall(data);
			}
			x++;
		}
		x = 0;
		y++;
	}
}
