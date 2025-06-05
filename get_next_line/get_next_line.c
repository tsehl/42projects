/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:49:19 by thsehl            #+#    #+#             */
/*   Updated: 2022/08/17 18:40:08 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char **line)
{
	if (*line)
		free(*line);
	return (NULL);
}

char	*ft_return(char *line, char *buffer)
{
	int		i;
	char	*pos;

	i = 0;
	if (ft_strchr(line, '\n'))
	{
		pos = ft_strchr(line, '\n');
		ft_bzero(pos, ft_strlen(pos));
	}
	else
		ft_bzero(buffer, ft_strlen(buffer));
	if (line[0] == 0)
		return (ft_free(&line));
	return (line);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			ret;

	if (fd < 0 || fd > FOPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	line = ft_strjoin(NULL, buffer);
	if (!line)
		return (NULL);
	ret = BUFFER_SIZE;
	while (ret == BUFFER_SIZE && !ft_strchr(buffer, '\n'))
	{
		ret = read(fd, buffer, BUFFER_SIZE);
		if (ret < 1)
			break ;
		buffer[ret] = 0;
		line = ft_strjoin(line, buffer);
		if (!line)
			return (ft_free(&line));
	}
	if (ret < 0)
		return (ft_free(&line));
	ft_cut(buffer);
	return (ft_return(line, buffer));
}
