/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:13:27 by tsehl             #+#    #+#             */
/*   Updated: 2022/11/21 11:24:03 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sort_c(long long int *stack, int ac)
{
	int	i;

	i = 0;
	while ((i < ac - 2 && stack[i + 1] != EMPTY) && stack[i] < stack[i + 1])
		i++;
	if (i == ac - 2)
		return (1);
	if (stack[i + 1] == EMPTY)
		return (1);
	return (0);
}

int	size_tab(long long int *tab, int ac)
{
	int	i;

	i = 0;
	while (tab[i] != EMPTY && i < ac - 1)
		i++;
	return (i);
}

void	ft_close(void)
{
	exit(0);
}

void	fill_min(long long int *stack_a, t_algo *algo, t_utils *utils, int ac)
{
	int	i;

	i = 0;
	while (++i < utils->size)
	{
		find_lastmin(stack_a, utils, ac);
		algo->tab[i] = utils->min;
	}
}

int	nb_arguments(char *arg)
{
	int	cpt;
	int	i;

	cpt = 0;
	i = 0;
	while (arg[i])
	{
		while (arg[i] == ' ' || arg[i] == 45)
			i++;
		if ((arg[i] > 47 && arg[i] < 58))
			cpt++;
		while (arg[i] && arg[i] > 47 && arg[i] < 58)
			i++;
		if (i == 0)
			return (0);
	}
	return (cpt);
}
