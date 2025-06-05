/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:43:37 by thsehl            #+#    #+#             */
/*   Updated: 2023/02/02 10:43:40 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	close_win(t_param *p)
{
	free_sprites(p);
	free_board(p, p->map->height);
	free(p->sprite);
	free(p->player);
	free(p->map);
	mlx_destroy_window(p->mlx_ptr, p->win_ptr);
	free(p);
	exit(0);
	return (0);
}

int	deal_key(int key, t_param *p)
{
	void	*sprite_ptr;

	if (key == ESCAPE)
		close_win(p);
	sprite_ptr = p->sprite->floor;
	if (!sprite_ptr)
		close_win(p);
	mlx_put_image_to_window(p->mlx_ptr, p->win_ptr,
		sprite_ptr, p->player->x * BLOC_SIZE, p->player->y * BLOC_SIZE);
	p->player->save_x = p->player->x;
	p->player->save_y = p->player->y;
	if (key == UP && !try_move(p, p->player->x, p->player->y - 1, 0))
		p->player->y -= 1;
	else if (key == DOWN && !try_move(p, p->player->x, p->player->y + 1, 0))
		p->player->y += 1;
	else if (key == LEFT && !try_move(p, p->player->x - 1, p->player->y, 0))
		p->player->x -= 1;
	else if (key == RIGHT && !try_move(p, p->player->x + 1, p->player->y, 0))
		p->player->x += 1;
	if ((p->player->x != p->player->save_x)
		|| (p->player->y != p->player->save_y))
		p->move_count++;
	if (draw_frame(p))
		close_win(p);
	return (0);
}
