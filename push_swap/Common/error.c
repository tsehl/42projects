/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:12:42 by tsehl             #+#    #+#             */
/*   Updated: 2022/11/21 11:33:53 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_nb_duplicate(int ac, long long int *tab)
{
	int	i;
	int	j;
	int	tmp;

	tmp = tab[0];
	i = 0;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (tmp == tab[j])
			{
				ft_putstr_fd("Error\n", 2);
				return (1);
			}
			j++;
		}
		i++;
		tmp = tab[i];
	}
	return (0);
}

int	is_not_int(int nb_int, long long int *tab)
{
	int	i;

	i = 0;
	while (i < nb_int)
	{
		if (tab[i] > 2147483647 || tab[i] < -2147483648)
		{
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_error(int ac, char **ar)
{
	int	i;
	int	j;

	i = 1;
	if (ac == 1)
		return (1);
	while (i < ac)
	{
		j = 0;
		while (ar[i][j])
		{
			if ((ar[i][j] != 45 && (ar[i][j] < 48 || ar[i][j] > 57)
					&& ar[i][j] != 32) || (ar[i][j] == 45
					&& ((j != 0 && ar[i][j - 1] != 32)
					|| (ar[i][j + 1] < 48 || ar[i][j + 1] > 57))))
			{
				ft_putstr_fd("Error\n", 2);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
