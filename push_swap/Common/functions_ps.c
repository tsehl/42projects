/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_ps.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehl <tsehl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:19:44 by tsehl             #+#    #+#             */
/*   Updated: 2021/10/06 15:19:45 by tsehl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(long long int *stack)
{
	int	tmp;

	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;
}

void	push(long long int *stack_1, long long int *stack_2, int ac)
{
	int	i;

	i = 0;
	while (stack_2[i] != EMPTY && i != ac - 2)
		i++;
	while (i > 0)
	{
		stack_2[i] = stack_2[i - 1];
		i--;
	}
	stack_2[0] = stack_1[0];
	while (stack_1[i++] != EMPTY && i != ac - 1)
		stack_1[i - 1] = stack_1[i];
	stack_1[i - 1] = EMPTY;
}

void	rotate(long long int *stack, int ac)
{
	int				i;
	int				j;
	long long int	tmp;

	i = 0;
	j = 0;
	while (stack[i] != EMPTY && i != ac - 1)
		i++;
	i--;
	tmp = stack[0];
	while (j < i)
	{
		stack[j] = stack[j + 1];
		j++;
	}
	stack[i] = tmp;
}

void	reverse_rotate(long long int *stack, int ac)
{
	int				i;
	long long int	tmp;

	i = 0;
	while (stack[i] != EMPTY && i != ac - 1)
		i++;
	i--;
	tmp = stack[i];
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = tmp;
}
