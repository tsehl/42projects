/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:27:42 by thsehl            #+#    #+#             */
/*   Updated: 2022/02/24 17:28:25 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "do_op.h"

void	fill_tab_f(int (*tab_f[])(int, int))
{
	tab_f[0] = addition;
	tab_f[1] = soustraction;
	tab_f[2] = multiplication;
	tab_f[3] = division;
	tab_f[4] = modulo;
}

void	do_op(int (*tab_f[])(int, int), char **av)
{
	if (av[2][0] == '+')
		ft_putnbr(tab_f[0](ft_atoi(av[1]), ft_atoi(av[3])));
	else if (av[2][0] == '-')
		ft_putnbr(tab_f[1](ft_atoi(av[1]), ft_atoi(av[3])));
	else if (av[2][0] == '*')
		ft_putnbr(tab_f[2](ft_atoi(av[1]), ft_atoi(av[3])));
	else if (av[2][0] == '/')
	{
		if (ft_atoi(av[3]) != 0)
			ft_putnbr(tab_f[3](ft_atoi(av[1]), ft_atoi(av[3])));
		else
			ft_putstr("Stop : division by zero");
	}
	else if (av[2][0] == '%')
	{
		if (ft_atoi(av[3]) != 0)
			ft_putnbr(tab_f[4](ft_atoi(av[1]), ft_atoi(av[3])));
		else
			ft_putstr("Stop : modulo by zero");
	}
	else
		ft_putnbr(0);
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	int	(*tab_f[5])(int, int);

	if (ac != 4)
		return (0);
	fill_tab_f(tab_f);
	do_op(tab_f, av);
}
