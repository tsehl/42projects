/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:19:47 by tsehl             #+#    #+#             */
/*   Updated: 2022/11/21 10:52:40 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_struct(t_utils *utils)
{
	utils->index_min = 0;
	utils->index_max = 0;
	utils->size = 0;
	utils->min = 0;
	utils->max = 0;
}

void	init_struct_fill_stack(t_fill_stack *fill_stack)
{
	fill_stack->i = 1;
	fill_stack->j = 0;
	fill_stack->k = 0;
	fill_stack->nb_arg = 0;
}

int	ft_free_2(long long int *stack_a, long long int *stack_b, char **tab)
{
	if (!tab)
	{
		free(stack_a);
		free(stack_b);
		return (0);
	}
	return (1);
}

int	init_stack(long long int *stack_a, long long int *stack_b,
		char **ar, int ac)
{
	t_fill_stack	fill_stack;
	char			**tab;

	init_struct_fill_stack(&fill_stack);
	while (fill_stack.i < ac)
	{
		fill_stack.j = 0;
		fill_stack.nb_arg = nb_arguments(ar[fill_stack.i]);
		tab = ft_split(ar[fill_stack.i], " ");
		if (!ft_free_2(stack_a, stack_b, tab))
			return (0);
		while (fill_stack.j < fill_stack.nb_arg)
		{
			stack_a[fill_stack.k] = ft_atoi(tab[fill_stack.j]);
			stack_b[fill_stack.k] = EMPTY;
			free(tab[fill_stack.j]);
			fill_stack.k++;
			fill_stack.j++;
		}
		free(tab);
		fill_stack.i++;
	}
	return (1);
}

void	init_tab(long long int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		tab[i] = EMPTY;
		i++;
	}
}
