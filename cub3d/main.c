/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:07:28 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:07:30 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/cube.h"

int	main(int argc, char **argv)
{
	t_data	*data;
	int		fd;

	check_argument(argc, argv, &fd);
	data = (t_data *)malloc(sizeof(t_data));
	if (!data)
		ft_error(NULL, "Allocation failed");
	init(data);
	if (malloc_all(data) == ERROR)
		ft_error(data, "Allocation failed");
	parsing(data, fd);
	exec(data);
}
