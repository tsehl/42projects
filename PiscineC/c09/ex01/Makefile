# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 13:57:38 by thsehl            #+#    #+#              #
#    Updated: 2022/02/23 13:58:15 by thsehl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH_H = ./includes/
PATH_SRC = ./srcs/
CFLAGS = -Wall -Wextra -Werror -I $(PATH_H)
SRCS = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_swap.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_strcmp.c
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(PATH_H)
	    ar rc $(NAME) $(OBJ)
clean:
	    rm -f $(OBJ)

fclean: clean
	    rm -f $(NAME)

re: fclean all
