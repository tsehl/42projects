# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/04 14:34:56 by thsehl            #+#    #+#              #
#    Updated: 2023/07/04 14:35:10 by thsehl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= poly
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRCS = main.cpp \
		AAnimal.cpp \
		Dog.cpp \
		Cat.cpp  \
		Brain.cpp

.PHONY: all clean re

all: $(NAME)

$(NAME): 
	@ $(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all