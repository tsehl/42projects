# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 19:03:19 by thsehl            #+#    #+#              #
#    Updated: 2023/10/26 19:03:23 by thsehl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

SRCS = main.cpp PmergeMe.cpp

OBJS =  $(SRCS:%.cpp=%.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $<

############################

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
