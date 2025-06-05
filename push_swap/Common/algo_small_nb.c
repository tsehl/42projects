/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_small_nb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:12:35 by tsehl             #+#    #+#             */
/*   Updated: 2022/11/21 11:33:58 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_conditions(long long int *stack_a, t_utils *utils, int ac)
{
	int	i;

	i = 0;
	if (utils->index_min < (ac - 1) / 2 + 1 && utils->index_min != 0)
	{
		while (i++ < utils->index_min)
		{
			rotate(stack_a, ac);
			ft_putstr_fd("ra\n", 1);
		}			
	}
	else if (utils->index_min != 0)
	{
		while (utils->index_min < ac - 1 && stack_a[utils->index_min] != EMPTY)
		{
			reverse_rotate(stack_a, ac);
			ft_putstr_fd("rra\n", 1);
			utils->index_min++;
		}
	}
}

void	ft_hope(long long int *stack_a, long long int *stack_b,
			int ac, t_utils *utils)
{
	int	i;

	i = 2;
	if (stack_a[3] != EMPTY)
		i = 3;
	if (stack_b[0] > utils->max || stack_b[0] < utils->min)
	{
		while (stack_a[0] != utils->min)
		{
			rotate(stack_a, ac);
			ft_putstr_fd("ra\n", 1);
		}
	}
	else
	{
		while (stack_b[0] > stack_a[0] || stack_b[0] < stack_a[i])
		{
			rotate(stack_a, ac);
			ft_putstr_fd("ra\n", 1);
		}
	}
	push(stack_b, stack_a, ac);
	ft_putstr_fd("pa\n", 1);
}

void	sort_5_nb(long long int *stack_a, long long int *stack_b,
		t_utils *utils, int ac)
{
	if (!is_sort_c(stack_a, ac))
	{
		push(stack_a, stack_b, ac);
		ft_putstr_fd("pb\n", 1);
		push(stack_a, stack_b, ac);
		ft_putstr_fd("pb\n", 1);
		sort_3_nb(stack_a, utils, ac);
		find_min(stack_a, utils, ac);
		find_max(stack_a, utils, ac);
		ft_hope(stack_a, stack_b, ac, utils);
		find_min(stack_a, utils, ac);
		find_max(stack_a, utils, ac);
		ft_hope(stack_a, stack_b, ac, utils);
		find_min(stack_a, utils, ac);
		ft_conditions(stack_a, utils, ac);
	}
}

void	ft_conditions_2(long long int *stack_a, t_utils *utils, int ac)
{
	if (utils->index_min == 1 && utils->index_max == 0)
	{
		rotate(stack_a, ac);
		ft_putstr_fd("ra\n", 1);
	}
	else if (utils->index_min == 2 && utils->index_max == 1)
	{
		reverse_rotate(stack_a, ac);
		ft_putstr_fd("rra\n", 1);
	}
	else
	{
		swap(stack_a);
		ft_putstr_fd("sa\n", 1);
		reverse_rotate(stack_a, ac);
		ft_putstr_fd("rra\n", 1);
	}
}

void	sort_3_nb(long long int *stack_a, t_utils *utils, int ac)
{
	if (!is_sort_c(stack_a, ac))
	{
		find_min(stack_a, utils, ac);
		find_max(stack_a, utils, ac);
		if (utils->index_min == 0)
		{
			reverse_rotate(stack_a, ac);
			ft_putstr_fd("rra\n", 1);
			swap(stack_a);
			ft_putstr_fd("sa\n", 1);
		}
		else if (utils->index_min == 1 && utils->index_max == 2)
		{
			swap(stack_a);
			ft_putstr_fd("sa\n", 1);
		}
		else
			ft_conditions_2(stack_a, utils, ac);
	}
}
