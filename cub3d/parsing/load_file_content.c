/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_file_content.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:10:04 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:10:27 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

char	*load_in_string(int fd)
{
	char	*str;
	char	*tmp;

	tmp = get_next_line(fd);
	if (!tmp)
		return (NULL);
	str = ft_strdup(tmp);
	if (!str)
	{
		free(tmp);
		return (NULL);
	}
	while (tmp != NULL)
	{
		free(tmp);
		tmp = get_next_line(fd);
		if (tmp != NULL)
		{
			str = ft_add_string(str, tmp);
			if (!str)
				return (NULL);
		}
	}
	return (str);
}

void	load_file_content(t_data *data, int fd)
{
	char	*str;

	str = load_in_string(fd);
	close(fd);
	if (str == NULL)
		ft_error(data, "Failed to reading configuration file");
	str = swap_tab_to_space(data, str, -1, -1);
	ft_split_cub(data, str);
	free(str);
}
