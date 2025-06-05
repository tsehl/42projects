# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/11 11:57:05 by thsehl            #+#    #+#              #
#    Updated: 2023/02/11 12:41:32 by thsehl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES		=	main.c		\
					init.c		\
					actions.c	\
					time.c		\
					free.c		\
					utils.c		\

OBJ_FILES		=	$(SRC_FILES:.c=.o)

NAME			=	philo

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ_FILES)
	@$(CC) $(CFLAGS) ${SRC_FILES} -lpthread -o $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	@rm -f $(OBJ_FILES)
	@rm -rf *.dSYM

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
