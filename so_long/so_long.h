/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:44:20 by thsehl            #+#    #+#             */
/*   Updated: 2023/02/02 10:44:23 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "./get_next_line/get_next_line.h"
# include "mlx.h"

# define DOOR "sprites/door.xpm"
# define PLAYER "sprites/player.xpm"
# define WALL "sprites/wall.xpm"
# define FLOOR "sprites/floor.xpm"
# define LOOT "sprites/loot.xpm"
# define ERROR_MSG "Error\nInvalid map\n"
# define IV -721

# define BLOC_SIZE 32
# define ESCAPE 53
# define UP 13
# define DOWN 1
# define LEFT 0
# define RIGHT 2

typedef struct s_map
{
	int		width;
	int		height;
	char	**board;
	int		pos_x;
	int		pos_y;
}			t_map;

typedef struct s_sprite
{
	int		width;
	int		height;
	void	*floor;
	void	*wall;
	void	*door;
	void	*loot;
}			t_sprite;

typedef struct s_player
{
	int		img_width;
	int		img_height;
	void	*player;
	int		x;
	int		y;
	int		save_x;
	int		save_y;
}			t_player;

typedef struct s_param
{
	void		*mlx_ptr;
	void		*win_ptr;
	int			move_count;
	t_map		*map;
	t_player	*player;
	t_sprite	*sprite;
}			t_param;

/* Checking map */
int			check_valid(t_param *p, char *str);
int			check_walls(t_param *p, int row, int col);
int			check_obj_requirements(t_param *p, int row, int col);
int			check_map(t_param *p, char *filename);
int			init_bc(t_map *omap);
void		backtracking(t_map *map, char **cmap, int pos_y, int pos_x);
int			ft_winnable(t_map *map);

/* Controls */
int			close_win(t_param *p);
int			deal_key(int key, t_param *p);

/* Drawing */
int			draw_frame(t_param *p);
int			draw_floor_wall(t_param *p, int row, int col);
int			draw_sprites(t_param *p, int row, int col);
int			draw_player(t_param *p);
int			try_move(t_param *p, int y, int x, int row);

/* Free allocated memory */
int			free_structs(t_param *p);
int			free_board(t_param *p, int n);
int			free_sprites(t_param *p);
int			free_board_and_structs(t_param *p);
int			free_all(t_param *p);

/* Initialization */
t_param		*ft_free(t_param *p);
t_param		*init_structs(void);
int			init_board(t_param *p);
int			init_sprites(t_param *p);

/* Main */
int			so_long(t_param *p);
int			main(int argc, char **argv);

/* Parsing */
int			map_height(char *filename);
int			map_width(char *filename, int res);
int			position_player(t_param *p, int row, int col);
int			parse_map(t_param *p, char *filename, int row, int col);

/* Utils */
void		ft_putnbr(int nbr);
char		*ft_strdup(const char *s);
int			error_message(void);
char		**ft_cpy_tab(char **tab, int height);
void		ft_free_tab(char **tab, int size);
int			ft_free_map(t_map *map);

#endif
