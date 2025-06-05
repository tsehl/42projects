/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_of_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:11:26 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:11:31 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

int	size_of_line(char *str)
{
	int	i;

	i = ft_strlen(str) - 2;
	while (str[i] && str[i] == ' ')
		i--;
	return (i + 1);
}

void	size_of_map(t_data *data, int i, int last_line)
{
	int	max_width;

	data->map_height = last_line - i + 1;
	if (data->map_height < 3)
		ft_error_map_small(data);
	data->map_width = size_of_line(data->file_content[i]);
	i++;
	while (i <= last_line)
	{
		max_width = size_of_line(data->file_content[i]);
		if (max_width > data->map_width)
			data->map_width = max_width;
		i++;
	}
	if (data->map_width < 3)
		ft_error_map_small(data);
}
