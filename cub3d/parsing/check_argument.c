/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argument.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:09:02 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:09:12 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

void	check_argument(int argc, char **argv, int *fd)
{
	int	len;

	if (argc != 2)
	{
		ft_printf("Error\nIncorrect number of arguments\n");
		exit(1);
	}
	len = ft_strlen(argv[1]);
	if (len < 5)
	{
		ft_printf("Error\nInvalid file format\n");
		exit(1);
	}
	if (argv[1][len - 1] != 'b' || argv[1][len - 2] != 'u' \
		|| argv[1][len - 3] != 'c' || argv[1][len - 4] != '.')
	{
		ft_printf("Error\nInvalid file format\n");
		exit(1);
	}
	*fd = open(argv[1], O_RDONLY);
	if (*fd < 0)
	{
		ft_printf("Error\n%s: No such file or directory\n", argv[1]);
		exit(1);
	}
}
