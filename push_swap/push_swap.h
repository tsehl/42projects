/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:36:25 by thsehl            #+#    #+#             */
/*   Updated: 2022/11/21 11:37:05 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define EMPTY 3000000000

typedef struct s_utils {
	int				index_min;
	int				index_max;
	int				size;
	long long int	min;
	long long int	max;
}				t_utils;

typedef struct s_algo {
	long long int	tab[25];
	int				hold_first;
	int				hold_second;
}				t_algo;

typedef struct s_fill_stack {
	int	i;
	int	j;
	int	k;
	int	nb_arg;
}				t_fill_stack;

typedef struct s_split_compt {
	int	i;
	int	j;
	int	index;
}				t_split_compt;

long long int	ft_atoi(const char *str);
void			push_swap(long long int *stack_a,
					long long int *stack_b, int ac);
int				ft_free(long long int *stack_a,
					long long int *stack_b, int choice);
void			ft_putstr_fd(char *s, int fd);
void			ft_putchar_fd(char c, int fd);
char			**ft_split(char *str, char *charset);
int				ft_strlen(char *str);
void			swap(long long int *stack);
void			push(long long int *stack_1, long long int *stack_2, int ac);
void			rotate(long long int *stack, int ac);
void			reverse_rotate(long long int *stack, int ac);
void			init_struct(t_utils *utils);
int				init_stack(long long int *stack_a, long long int *stack_b,
					char **ar, int ac);
int				is_sort_c(long long int *stack, int ac);
void			find_min(long long int *stack, t_utils *utils, int ac);
void			find_max(long long int *stack, t_utils *utils, int ac);
void			init_tab(long long int *tab, int size);
void			find_lastmin(long long int *stack, t_utils *utils, int ac);
int				ft_find_nb(long long int *tab, int c, int size);
int				size_tab(long long int *tab, int ac);
void			sort_5_nb(long long int *stack_a, long long int *stack_b,
					t_utils *utils, int ac);
void			sort_3_nb(long long int *stack_a, t_utils *utils, int ac);
void			sort_100_nb(long long int *stack_a, long long int *stack_b,
					t_utils *utils, int ac);
void			sort_500_nb(long long int *stack_a, long long int *stack_b,
					t_utils *utils, int ac);
int				check_error(int ac, char **ar);
void			ft_close(void);
int				is_nb_duplicate(int ac, long long *tab);
int				is_not_int(int nb_int, long long *tab);
void			fill_min(long long int *stack_a, t_algo *algo,
					t_utils *utils, int ac);
int				nb_arguments(char *arg);
void			sort_nb(long long int *stack_a, long long int *stack_b,
					t_utils *utils, int ac);

#endif