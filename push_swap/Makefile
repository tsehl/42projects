SRCS =	./Common/algo_big_nb.c \
		./Common/algo_small_nb.c \
		./Common/find.c \
		./Common/functions_ps.c \
		./Common/init.c \
		./Common/utils.c \
		./Utils/ft_atoi.c \
		./Utils/ft_putchar_fd.c \
		./Utils/ft_putstr_fd.c \
		./Utils/ft_split.c \
		./Common/error.c \
		./Common/push.c  \
		./Utils/ft_strcmp.c \
		./Utils/ft_strlen.c \

PUSH =	./Sources/push_swap.c \

CHECK = ./Check/check_sort.c \
		./Check/checker.c \
		./get_next_line/get_next_line.c \
		./get_next_line/get_next_line_utils.c \

OBJS1 		= ${SRCS:.c=.o} ${PUSH:.c=.o}

OBJS2 		= ${SRCS:.c=.o} ${CHECK:.c=.o}

CC 			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
NAME		= push_swap
NAME2		= checker

all: 		${NAME}

bonus:		${NAME2}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): 	$(OBJS1)
			${CC} $(CFLAGS)  -o $(NAME) $(OBJS1)

$(NAME2):	$(OBJS2)
			${CC} $(CFLAGS)  -o $(NAME2) $(OBJS2)

clean:
			${RM} ${OBJS1} ${OBJS2}

fclean: 	clean
			${RM} ${NAME} ${NAME2}

re: 		fclean all

.PHONY:		all clean fclean re