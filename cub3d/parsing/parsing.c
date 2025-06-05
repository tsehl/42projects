/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:10:58 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 14:02:55 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

int	jump_empty_line(t_data *data, int i)
{
	if (data->file_content[i] == 0)
		ft_error(data, "No map found in cub file");
	while (data->file_content[i] && is_empty_line(data->file_content[i]) == 1)
		i++;
	if (data->file_content[i] == 0)
		ft_error(data, "No map found in cub file");
	return (i);
}

void	parsing(t_data *data, int fd)
{
	int	i;
	int	last_line;

	load_file_content(data, fd);
	i = parse_path_and_colors(data);
	i = jump_empty_line(data, i);
	last_line = check_line_map(data, i);
	size_of_map(data, i, last_line);
	malloc_map(data);
	map_to_int(data, i, last_line);
	search_player_pos(data);
	check_map(data);
}
