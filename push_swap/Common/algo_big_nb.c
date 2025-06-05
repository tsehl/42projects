/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_big_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:34:29 by thsehl            #+#    #+#             */
/*   Updated: 2022/11/21 11:34:32 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_conditions_3(long long int *stack_a, t_utils *utils, int ac)
{
	int	i;

	i = 0;
	if (utils->index_min < size_tab(stack_a, ac) / 2)
	{
		while (utils->index_min > 0)
		{
			rotate(stack_a, ac);
			ft_putstr_fd("ra\n", 1);
			utils->index_min--;
		}
	}
	else
	{
		while (i < size_tab(stack_a, ac))
		{
			reverse_rotate(stack_a, ac);
			ft_putstr_fd("rra\n", 1);
			i++;
		}
	}
}

void	sort_20_nb(long long int *stack_a, long long int *stack_b,
		t_utils *utils, int ac)
{
	t_algo	algo;
	int		i;
	int		j;

	init_tab(algo.tab, 20);
	find_min(stack_a, utils, ac);
	algo.tab[0] = utils->min;
	utils->size = 20;
	fill_min(stack_a, &algo, utils, ac);
	j = 0;
	while (j++ < 20)
	{
		i = 0;
		while (!ft_find_nb(algo.tab, stack_a[i], 20))
			i++;
		algo.hold_first = stack_a[i];
		utils->index_min = i;
		i = ac - 1;
		while (!ft_find_nb(algo.tab, stack_a[i], 20))
			i--;
		algo.hold_second = stack_a[i];
		ft_conditions_3(stack_a, utils, ac);
		push(stack_a, stack_b, ac);
		ft_putstr_fd("pb\n", 1);
	}
}

void	sort_25_nb(long long int *stack_a, long long int *stack_b,
		t_utils *utils, int ac)
{
	t_algo	algo;
	int		i;
	int		j;

	init_tab(algo.tab, 25);
	find_min(stack_a, utils, ac);
	algo.tab[0] = utils->min;
	utils->size = 25;
	fill_min(stack_a, &algo, utils, ac);
	j = 0;
	while (j++ < 25)
	{
		i = 0;
		while (!ft_find_nb(algo.tab, stack_a[i], 25))
			i++;
		algo.hold_first = stack_a[i];
		utils->index_min = i;
		i = ac - 1;
		while (!ft_find_nb(algo.tab, stack_a[i], 25))
			i--;
		algo.hold_second = stack_a[i];
		ft_conditions_3(stack_a, utils, ac);
		push(stack_a, stack_b, ac);
		ft_putstr_fd("pb\n", 1);
	}
}

void	sort_100_nb(long long int *stack_a, long long int *stack_b,
		t_utils *utils, int ac)
{
	int	i;

	i = 0;
	while (i++ < 5)
		sort_20_nb(stack_a, stack_b, utils, ac);
	i = 0;
	while (i++ < 100)
	{
		find_max(stack_b, utils, ac);
		while (stack_b[0] != utils->max)
		{
			if (utils->index_max > size_tab(stack_b, ac) / 2)
			{
				reverse_rotate(stack_b, ac);
				ft_putstr_fd("rrb\n", 1);
			}
			else
			{
				rotate(stack_b, ac);
				ft_putstr_fd("rb\n", 1);
			}
		}
		push(stack_b, stack_a, ac);
		ft_putstr_fd("pa\n", 1);
	}
}

void	sort_500_nb(long long int *stack_a, long long int *stack_b,
		t_utils *utils, int ac)
{
	int	i;

	i = 0;
	while (i++ < 20)
		sort_25_nb(stack_a, stack_b, utils, ac);
	i = 0;
	while (i++ < 500)
	{
		find_max(stack_b, utils, ac);
		while (stack_b[0] != utils->max)
		{
			if (utils->index_max > size_tab(stack_b, ac) / 2)
			{
				reverse_rotate(stack_b, ac);
				ft_putstr_fd("rrb\n", 1);
			}
			else
			{
				rotate(stack_b, ac);
				ft_putstr_fd("rb\n", 1);
			}
		}
		push(stack_b, stack_a, ac);
		ft_putstr_fd("pa\n", 1);
	}
}
