/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:10:57 by thsehl            #+#    #+#             */
/*   Updated: 2022/02/17 19:11:01 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_print_zero(char **av, int ac)
{
	int	i;
	int	nb_zero;

	i = 1;
	nb_zero = 0;
	while (i < ac)
	{
		if (av[i][0] == 0 && nb_zero++ > -1)
			write(1, "\n", 1);
		i++;
	}
	return (nb_zero);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	if (s1[i] - s2[i] > 0)
		return (1);
	else
		return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	min;
	int	nb_zero;

	i = 1;
	nb_zero = ft_print_zero(av, ac);
	while (i < ac - nb_zero)
	{
		min = 1;
		j = 1;
		while (j < ac)
		{
			if (av[min][0] == 0 && av[j][0] != 0)
				min = j;
			else if (av[j][0] != 0 && ft_strcmp(av[min], av[j]))
				min = j;
			j++;
		}
		write(1, av[min], ft_strlen(av[min]));
		write(1, "\n", 1);
		av[min][0] = 0;
		i++;
	}
}
