# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dolescar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 15:12:19 by dolescar          #+#    #+#              #
#    Updated: 2023/10/09 15:12:20 by dolescar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	bureaucrat

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC_FILES	=	main.cpp					\
				Bureaucrat.cpp				\
				Form.cpp					\
				PresidentialPardonForm.cpp	\
				RobotomyRequestForm.cpp		\
				ShrubberyCreationForm.cpp

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
