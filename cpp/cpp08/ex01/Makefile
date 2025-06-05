# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 15:42:21 by thsehl            #+#    #+#              #
#    Updated: 2023/10/26 15:42:23 by thsehl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC_FILES	=	main.cpp	\
				Span.cpp

OBJ_FILES	=	$(SRC_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) $(OBJ_FILES) -o $(NAME)

%.cpp: %.c
	$(CXX) -c $(CXXFLAGS) -o $@ $<

clean:
	rm -rf $(OBJ_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
