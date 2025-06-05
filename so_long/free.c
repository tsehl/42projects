/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:43:48 by thsehl            #+#    #+#             */
/*   Updated: 2023/02/02 10:43:50 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	free_structs(t_param *p)
{
	free(p->sprite);
	free(p->player);
	free(p->map);
	free(p);
	error_message();
	return (1);
}

int	free_board(t_param *p, int n)
{
	while (n > 0)
	{
		free(p->map->board[n - 1]);
		n--;
	}
	free(p->map->board);
	return (1);
}

int	free_sprites(t_param *p)
{
	mlx_destroy_image(p->mlx_ptr, p->sprite->floor);
	mlx_destroy_image(p->mlx_ptr, p->sprite->wall);
	mlx_destroy_image(p->mlx_ptr, p->sprite->door);
	mlx_destroy_image(p->mlx_ptr, p->sprite->loot);
	mlx_destroy_image(p->mlx_ptr, p->player->player);
	return (1);
}

int	free_board_and_structs(t_param *p)
{
	free_board(p, p->map->height);
	free_structs(p);
	return (1);
}

int	free_all(t_param *p)
{
	free_board(p, p->map->height);
	free_sprites(p);
	free_structs(p);
	return (1);
}
