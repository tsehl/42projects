/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:34:11 by thsehl            #+#    #+#             */
/*   Updated: 2022/11/21 11:34:13 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdio.h>
# include "../get_next_line/get_next_line.h"
# include "../push_swap.h"

int		ft_strcmp(char *s1, char*s2);
int		check_sort(long long *stack_a, int nb_int);

#endif