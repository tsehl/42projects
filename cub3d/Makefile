# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 13:07:13 by thsehl            #+#    #+#              #
#    Updated: 2023/06/12 13:07:15 by thsehl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


LIBFT = ./libft/libft.a

NAME = cub3D

SRCS = 	main.c \
		utils/exit.c \
		utils/free_data.c \
		utils/ft_error.c \
		utils/init.c \
		utils/is_empty_line.c \
		utils/malloc_all.c \
		utils/trim_space.c \
		utils/file_exist.c \
		utils/ft_add_string.c \
		utils/ft_realloc_add.c \
		utils/swap_tab_to_spaces.c \
		executor/charge_textures.c \
		executor/draw.c \
		executor/event.c \
		executor/exec.c \
		executor/minilibx_init.c \
		executor/move.c \
		executor/raycast.c \
		executor/run.c \
		executor/utils.c \
		executor/get_tex_pixl.c \
		executor/wall_tex.c \
		parsing/add_color_in_data.c \
		parsing/check_argument.c \
		parsing/check_dup_alloc.c \
		parsing/ft_split_cub.c \
		parsing/load_file_content.c \
		parsing/parse_path_and_colors.c \
		parsing/parsing.c \
		parsing/check_line_map.c \
		parsing/size_of_map.c \
		parsing/malloc_map.c \
		parsing/map_to_int.c \
		parsing/check_map.c \
		parsing/search_player_start.c \

CC = gcc

FLAGS = -Wall -Wextra -Werror -l mlx -framework OpenGL -framework Appkit


OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	$(CC) $(FLAGS) $(INCLUDES) $(LIBFT) $(SRCS)-o $(NAME)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all
