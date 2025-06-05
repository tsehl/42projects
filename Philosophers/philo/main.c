/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:24:41 by thsehl            #+#    #+#             */
/*   Updated: 2023/02/11 12:19:44 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	*start_routine(void *env)
{
	t_thread	*thread;
	t_param		*param;

	thread = env;
	param = thread->param;
	if (thread->philosopher_id % 2 != 0 && param->nbr_philo > 1)
	{
		ft_log(param, thread->philosopher_id, THINK);
		custom_sleep(param->time_to_eat / 2, param);
	}
	while (!param->end)
	{
		pick_up_and_eat(thread);
		ft_log(param, thread->philosopher_id, SLEEP);
		custom_sleep(param->time_to_sleep, param);
		ft_log(param, thread->philosopher_id, THINK);
	}
	return (NULL);
}

int	main(int argc, char **argv)
{
	t_param	*param;

	if (!(argc == 5 || argc == 6))
		return (ft_error(ERROR_USAGE));
	if (ft_check_input(argc, argv) == -1)
		return (ft_error(WRONG_INPUT));
	param = malloc(sizeof(t_param));
	if (!param)
		return (ft_error(ERROR_INIT));
	if (init_param(param, argc, argv) == -1)
		return (ft_error(ERROR_INIT));
	if (init_mutexes(param, -1) == -1)
		return (ft_error(ERROR_INIT));
	if (init_threads(param, -1) == -1)
		return (ft_error(ERROR_INIT));
	destroy_mutexes(param);
	free(param->thread);
	free_memory(param);
	return (EXIT_SUCCESS);
}
