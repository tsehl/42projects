/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:24:48 by thsehl            #+#    #+#             */
/*   Updated: 2023/02/11 10:24:50 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

long long int	time_now(void)
{
	struct timeval		te;
	unsigned long int	time_in_ms;

	gettimeofday(&te, NULL);
	time_in_ms = (te.tv_sec * 1000) + (te.tv_usec / 1000);
	return (time_in_ms);
}

void	custom_sleep(unsigned long int duration, t_param *param)
{
	unsigned long int	start;

	start = time_now();
	while (!param->end)
	{
		if (time_now() - start >= duration)
			break ;
		usleep(param->nbr_philo * 2);
	}
}
