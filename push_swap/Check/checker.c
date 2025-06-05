/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:34:19 by thsehl            #+#    #+#             */
/*   Updated: 2022/11/24 15:01:38 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	ft_move2(long long *stack_a, long long *stack_b, int index, int ac)
{
	if (index == 8)
		reverse_rotate(stack_a, ac);
	if (index == 9)
		reverse_rotate(stack_b, ac);
	if (index == 10)
	{
		reverse_rotate(stack_a, ac);
		reverse_rotate(stack_b, ac);
	}
}

static int	ft_move(long long *stack_a, long long *stack_b, int index, int ac)
{
	if (index == 0)
		swap(stack_a);
	if (index == 1)
		swap(stack_b);
	if (index == 2)
	{
		swap(stack_a);
		swap(stack_b);
	}
	if (index == 3)
		push(stack_b, stack_a, ac);
	if (index == 4)
		push(stack_a, stack_b, ac);
	if (index == 5)
		rotate(stack_a, ac);
	if (index == 6)
		rotate(stack_b, ac);
	if (index == 7)
	{
		rotate(stack_a, ac);
		rotate(stack_b, ac);
	}
	ft_move2(stack_a, stack_b, index, ac);
	return (1);
}

static int	ft_action(char *action, long long int *stack_a
, long long int *stack_b, int ac)
{
	if (!ft_strcmp(action, "sa\n"))
		return (ft_move(stack_a, stack_b, 0, ac));
	if (!ft_strcmp(action, "sb\n"))
		return (ft_move(stack_a, stack_b, 1, ac));
	if (!ft_strcmp(action, "ss\n"))
		return (ft_move(stack_a, stack_b, 2, ac));
	if (!ft_strcmp(action, "pa\n"))
		return (ft_move(stack_a, stack_b, 3, ac));
	if (!ft_strcmp(action, "pb\n"))
		return (ft_move(stack_a, stack_b, 4, ac));
	if (!ft_strcmp(action, "ra\n"))
		return (ft_move(stack_a, stack_b, 5, ac));
	if (!ft_strcmp(action, "rb\n"))
		return (ft_move(stack_a, stack_b, 6, ac));
	if (!ft_strcmp(action, "rr\n"))
		return (ft_move(stack_a, stack_b, 7, ac));
	if (!ft_strcmp(action, "rra\n"))
		return (ft_move(stack_a, stack_b, 8, ac));
	if (!ft_strcmp(action, "rrb\n"))
		return (ft_move(stack_a, stack_b, 9, ac));
	if (!ft_strcmp(action, "rrr\n"))
		return (ft_move(stack_a, stack_b, 10, ac));
	if (!ft_strcmp(action, "\n"))
		return (1);
	return (0);
}

static void	ft_check(long long int *stack_a, long long int *stack_b, int ac)
{
	char	*action;

	action = get_next_line(0);
	while (action)
	{
		if (!ft_action(action, stack_a, stack_b, ac))
		{
			ft_putstr_fd("Error\n", 2);
			return ;
		}
		action = get_next_line(0);
	}
	if (check_sort(stack_a, ac - 1))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
}

int	main(int ac, char **ar)
{	
	long long int	*stack_a;
	long long int	*stack_b;
	int				nb_int;
	int				i;

	i = 1;
	nb_int = 0;
	if (check_error(ac, ar))
		return (1);
	while (i < ac)
		nb_int = nb_int + nb_arguments(ar[i++]);
	stack_a = malloc(sizeof(long long int) * (nb_int));
	if (!stack_a)
		return (1);
	stack_b = malloc(sizeof(long long int) * (nb_int));
	if (!ft_free(stack_a, stack_b, 0))
		return (1);
	if (!init_stack(stack_a, stack_b, ar, ac))
		return (1);
	if (is_not_int(nb_int, stack_a))
		return (ft_free(stack_a, stack_b, 1));
	if (is_nb_duplicate(nb_int, stack_a))
		return (ft_free(stack_a, stack_b, 1));
	ft_check(stack_a, stack_b, nb_int + 1);
	ft_free(stack_a, stack_b, 1);
}
