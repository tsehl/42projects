# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 14:39:10 by thsehl            #+#    #+#              #
#    Updated: 2022/05/10 14:39:16 by thsehl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -Wall -Wextra -Werror
SRCS = ft_strmapi.c  ft_itoa.c  ft_atoi.c  ft_bzero.c  ft_putnbr_fd.c  ft_putendl_fd.c  ft_putchar_fd.c  ft_putstr_fd.c  ft_calloc.c  ft_strdup.c  ft_strrchr.c  ft_strchr.c  ft_strnstr.c  ft_strjoin.c  ft_strlen.c  ft_memmove.c  ft_strtrim.c  ft_split.c   ft_memchr.c  ft_strlcpy.c  ft_memcmp.c  ft_memcpy.c  ft_memset.c  ft_strlcat.c  ft_strncmp.c  ft_toupper.c  ft_tolower.c  ft_substr.c  ft_isalpha.c  ft_isascii.c  ft_isdigit.c  ft_isalnum.c  ft_isprint.c   ft_striteri.c
OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
				ar rc $(NAME) $(OBJ)
clean:
				rm -f $(OBJ)
fclean : clean
				rm -f $(NAME)
re: fclean all