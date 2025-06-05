/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:44:03 by thsehl            #+#    #+#             */
/*   Updated: 2023/02/02 10:44:06 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	so_long(t_param *p)
{
	p->mlx_ptr = mlx_init();
	if (!p->mlx_ptr)
		return (free_board_and_structs(p));
	p->win_ptr = mlx_new_window(p->mlx_ptr,
			p->map->width * BLOC_SIZE, p->map->height * BLOC_SIZE, "so_long");
	if (!p->win_ptr)
		return (free_board_and_structs(p));
	if (init_sprites(p))
	{
		mlx_destroy_window(p->mlx_ptr, p->win_ptr);
		return (free_board_and_structs(p));
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_param		*p;

	if (argc != 2)
		return (error_message());
	p = init_structs();
	if (!p)
		return (error_message());
	if (check_map(p, argv[1]))
		return (free_structs(p));
	if (!init_bc(p->map))
		return (free_structs(p));
	if (so_long(p))
		return (1);
	if (draw_floor_wall(p, 0, 0)
		&& mlx_destroy_window(p->mlx_ptr, p->win_ptr) != IV)
		return (free_all(p));
	if (draw_frame(p))
	{
		mlx_destroy_window(p->mlx_ptr, p->win_ptr);
		return (free_all(p));
	}
	mlx_hook(p->win_ptr, 2, 1L << 0, &deal_key, p);
	mlx_hook(p->win_ptr, 17, 1L << 17, &close_win, p);
	mlx_loop(p->mlx_ptr);
	return (0);
}
