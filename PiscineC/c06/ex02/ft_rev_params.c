/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:10:47 by thsehl            #+#    #+#             */
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

int	main(int ac, char **av)
{
	ac--;
	while (ac > 0)
	{
		write(1, av[ac], ft_strlen(av[ac]));
		write(1, "\n", 1);
		ac--;
	}
	return (ac);
}
