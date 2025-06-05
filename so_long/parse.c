/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:44:10 by thsehl            #+#    #+#             */
/*   Updated: 2023/02/02 10:44:11 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	map_height(char *filename)
{
	int		fd;
	int		count_height;
	char	*line;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (-1);
	count_height = 0;
	line = get_next_line(fd);
	while (line != NULL)
	{
		count_height++;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (count_height);
}

int	map_width(char *filename, int res)
{
	int		count_width;
	int		fd;
	char	*line;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (-1);
	res = 0;
	line = get_next_line(fd);
	while (line && line[res] != '\0' && line[res] != '\n')
		res++;
	free(line);
	line = get_next_line(fd);
	while (line != NULL)
	{
		count_width = 0;
		while (line[count_width] != '\0' && line[count_width] != '\n')
			count_width++;
		if (res != count_width)
			return (-1);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (res);
}

int	position_player(t_param *p, int row, int col)
{
	p->player->x = col;
	p->player->y = row;
	return (0);
}

int	parse_map(t_param *p, char *filename, int row, int col)
{
	int		fd;
	char	*line;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (-1);
	if (init_board(p))
		return (-1);
	while (row < p->map->height)
	{
		col = 0;
		line = get_next_line(fd);
		while (col < p->map->width)
		{
			p->map->board[row][col] = line[col];
			if (p->map->board[row][col] == 'P')
				position_player(p, row, col);
			col++;
		}
		free(line);
		row++;
	}
	close(fd);
	return (0);
}
