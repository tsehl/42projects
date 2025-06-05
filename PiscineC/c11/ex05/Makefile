# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 17:27:57 by thsehl            #+#    #+#              #
#    Updated: 2022/02/24 17:28:25 by thsehl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./do_op.c \
		./operations.c \
		./utils.c \

OBJS 		= ${SRCS:.c=.o}

CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
NAME		= do-op

all: 		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): 	$(OBJS)
			${CC} $(CFLAGS)  -o $(NAME) $(OBJS)
clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re
