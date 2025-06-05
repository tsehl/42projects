/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:24:32 by thsehl            #+#    #+#             */
/*   Updated: 2023/02/11 10:24:34 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	free_param(t_param *param)
{
	free(param);
	return (-1);
}

void	free_memory(t_param *param)
{
	free(param->fork_id);
	free(param->fork);
	free(param);
}

int	destroy_mutexes(t_param *param)
{
	int	i;

	i = -1;
	while (++i < param->nbr_philo)
		pthread_mutex_destroy(&param->fork[i]);
	pthread_mutex_destroy(&param->eat);
	pthread_mutex_destroy(&param->write);
	return (0);
}

int	ft_error(char *error_msg)
{
	printf("%s", error_msg);
	return (EXIT_FAILURE);
}
