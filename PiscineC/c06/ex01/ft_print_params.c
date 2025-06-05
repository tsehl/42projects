/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:10:34 by thsehl            #+#    #+#             */
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

int	main( int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{	
		write(1, av[i], ft_strlen(av[i]));
		i++;
		write(1, "\n", 1);
	}
	return (ac);
}
