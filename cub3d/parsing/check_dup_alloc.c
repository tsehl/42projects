/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:09:27 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:09:29 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

void	check_dup_alloc(t_data *data, int identifer)
{
	if (identifer == NORTH)
	{
		if (data->path_north == NULL)
			ft_error(data, "Allocation Failed");
	}
	else if (identifer == SOUTH)
	{
		if (data->path_south == NULL)
			ft_error(data, "Allocation Failed");
	}
	else if (identifer == EAST)
	{
		if (data->path_east == NULL)
			ft_error(data, "Allocation Failed");
	}
	else if (identifer == NORTH)
	{
		if (data->path_west == NULL)
			ft_error(data, "Allocation Failed");
	}
}
