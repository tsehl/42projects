# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dolescar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 15:11:36 by dolescar          #+#    #+#              #
#    Updated: 2023/10/09 15:11:38 by dolescar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bureaucrat
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRCS = main.cpp \
		Bureaucrat.cpp \
		Form.cpp

.PHONY: all clean re

all: $(NAME)

$(NAME): 
	@ $(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all
