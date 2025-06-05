/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:19:50 by tsehl             #+#    #+#             */
/*   Updated: 2022/11/21 11:24:45 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_swap(long long int *stack_a, long long int *stack_b, int ac)
{
	t_utils	utils;

	init_struct(&utils);
	if (ac == 4)
		sort_3_nb(stack_a, &utils, ac);
	else if (ac == 101)
		sort_100_nb(stack_a, stack_b, &utils, ac);
	else if (ac == 501)
		sort_500_nb(stack_a, stack_b, &utils, ac);
	else if (ac == 6)
		sort_5_nb(stack_a, stack_b, &utils, ac);
	else
		sort_nb(stack_a, stack_b, &utils, ac);
}

int	ft_free(long long int *stack_a, long long int *stack_b, int choice)
{
	if (choice == 0)
	{
		if (!stack_b)
		{
			free(stack_a);
			return (0);
		}
	}
	else
	{
		free(stack_a);
		free(stack_b);
		return (0);
	}
	return (1);
}

void	ft_putmin(long long int *stack_a, t_utils *utils, int ac)
{
	if (utils->index_min < size_tab(stack_a, ac) / 2)
	{
		while (stack_a[0] != utils->min)
		{
			rotate(stack_a, ac);
			ft_putstr_fd("ra\n", 1);
		}
	}
	else
	{
		while (stack_a[0] != utils->min)
		{
			reverse_rotate(stack_a, ac);
			ft_putstr_fd("rra\n", 1);
		}
	}
}

void	sort_nb(long long int *stack_a, long long int *stack_b,
		t_utils *utils, int ac)
{
	if (!is_sort_c(stack_a, ac))
	{
		while (stack_a[0] != EMPTY)
		{
			find_min(stack_a, utils, ac);
			ft_putmin(stack_a, utils, ac);
			push(stack_a, stack_b, ac);
			ft_putstr_fd("pb\n", 1);
		}
		while (stack_b[0] != EMPTY)
		{
			push(stack_b, stack_a, ac);
			ft_putstr_fd("pa\n", 1);
		}
	}
}
