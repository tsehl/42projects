# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 16:20:39 by thsehl            #+#    #+#              #
#    Updated: 2023/10/24 16:20:42 by thsehl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= convert
SRCS		= main.cpp ScalarConverter.cpp
OBJS		= $(SRCS:.cpp=.o)
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
CPP			= c++
RM			= rm -f

all: $(NAME)

$(NAME) : $(OBJS)
		$(CPP) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean	:
		$(RM) $(OBJS)

fclean	: 	clean
			$(RM) $(NAME)  
			rm -rf ~/LIbrary/Caches

re		:fclean all
.PHONY: all clean fclean re