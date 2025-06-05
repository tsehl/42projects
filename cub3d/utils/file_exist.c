/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_exist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:07:38 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:07:41 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

int	id_first_c(char *str)
{
	int	i;

	i = 2;
	while (str[i] && str[i] == ' ')
		i++;
	return (i);
}

void	error_file_exist(t_data *data, int identifier)
{
	printf("Error\n");
	if (identifier == NORTH)
		printf("File [%s] doesn't exist or is a directory\n", \
		&data->path_north[id_first_c(data->path_north)]);
	if (identifier == SOUTH)
		printf("File [%s] doesn't exist or is a directory\n", \
		&data->path_south[id_first_c(data->path_south)]);
	if (identifier == EAST)
		printf("File [%s] doesn't exist or is a directory\n", \
		&data->path_east[id_first_c(data->path_east)]);
	if (identifier == WEST)
		printf("File [%s] doesn't exist or is a directory\n", \
		&data->path_west[id_first_c(data->path_west)]);
	ft_exit(data);
}

void	check_extension_xmp(t_data *data, char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	if (i < 3)
		ft_error(data, "Name of texture file is not good");
	if (str[i] == 'm' && str[i - 1] == 'p' && str[i - 2] == 'x' \
		&& str[i - 3] == '.')
		return ;
	ft_error(data, "Texture file need to be XMP file");
}

void	file_exist(t_data *data, int identifier)
{
	int	fd;

	if (identifier == NORTH)
		fd = open(data->path_north, O_RDONLY);
	if (identifier == SOUTH)
		fd = open(data->path_south, O_RDONLY);
	if (identifier == EAST)
		fd = open(data->path_east, O_RDONLY);
	if (identifier == WEST)
		fd = open(data->path_west, O_RDONLY);
	if (fd == -1)
		error_file_exist(data, identifier);
	close(fd);
}
