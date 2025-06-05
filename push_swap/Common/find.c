/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehl <tsehl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:19:40 by tsehl             #+#    #+#             */
/*   Updated: 2021/10/06 15:19:42 by tsehl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_min(long long int *stack, t_utils *utils, int ac)
{
	int	i;

	utils->index_min = 0;
	utils->min = stack[0];
	i = 0;
	while (stack[i] != EMPTY && i < ac - 1)
	{
		if (utils->min > stack[i])
		{
			utils->min = stack[i];
			utils->index_min = i;
		}
		i++;
	}
}

void	find_max(long long int *stack, t_utils *utils, int ac)
{
	int	i;

	utils->index_max = 0;
	utils->max = stack[0];
	i = 0;
	while (stack[i] != EMPTY && i < ac - 1)
	{
		if (utils->max < stack[i])
		{
			utils->max = stack[i];
			utils->index_max = i;
		}
		i++;
	}
}

void	find_lastmin(long long int *stack, t_utils *utils, int ac)
{
	int	last_min;
	int	i;

	utils->index_min = 0;
	i = 0;
	last_min = utils->min;
	utils->min = EMPTY;
	while (stack[i] != EMPTY && i < ac - 1)
	{
		if (utils->min > stack[i] && stack[i] > last_min)
		{
			utils->min = stack[i];
			utils->index_min = i;
		}
		i++;
	}
}

int	ft_find_nb(long long int *tab, int c, int size)
{
	int	i;

	i = 0;
	while (tab[i] != c && i < size)
		i++;
	return (i != size);
}
