# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 14:01:11 by thsehl            #+#    #+#              #
#    Updated: 2023/06/12 14:01:14 by thsehl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

SRCS		= 	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
				ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
				ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c get_next_line.c get_next_line_utils.c ft_flags_display.c ft_flags_parse.c ft_flags.c \
				ft_itoa_hexa.c ft_litoa.c ft_print_char.c ft_print_hexa.c ft_print_int.c ft_print_pointeur.c ft_print_pourcent.c ft_print_string.c ft_print_unsigned_int.c ft_print_var.c \
				ft_uitoa.c ft_utils.c ft_utils2.c ft_printf.c ft_realloc.c ft_add_char_to_string.c

OBJS		= $(SRCS:.c=.o)


${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			/bin/${RM} ${OBJS} 

fclean:		clean
			/bin/rm -f ${NAME}

re:			fclean all

.PHONY:		clean fclean re all
