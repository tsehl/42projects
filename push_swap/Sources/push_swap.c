/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:20:22 by tsehl             #+#    #+#             */
/*   Updated: 2022/11/24 15:01:28 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	if (nb_int == 0)
		return (ft_free(stack_a, stack_b, 1));
	if (!init_stack(stack_a, stack_b, ar, ac))
		return (1);
	if (is_not_int(nb_int, stack_a) || is_nb_duplicate(nb_int, stack_a))
		return (ft_free(stack_a, stack_b, 1));
	push_swap(stack_a, stack_b, nb_int + 1);
	ft_free(stack_a, stack_b, 1);
}
