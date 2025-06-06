/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:25:04 by thsehl            #+#    #+#             */
/*   Updated: 2023/02/11 10:25:13 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

static int	ft_overflow(int sign)
{
	if (sign == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *nptr)
{
	int			i;
	int			sign;
	long long	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((*(nptr + i) >= 9 && *(nptr + i) <= 13) || *(nptr + i) == 32)
		i++;
	if (*(nptr + i) == ' ' || *(nptr + i) == '-' || *(nptr + i) == '+')
	{
		if (*(nptr + i) == '-')
			sign = -1;
		i++;
	}
	while (*(nptr + i) != '\0' && ft_isdigit(*(nptr + i)))
	{
		if (res > LONG_MAX / 10)
			return (ft_overflow(sign));
		res = (10 * res) + (*(nptr + i) - '0');
		if (res < 0)
			return (ft_overflow(sign));
		i++;
	}
	return (sign * res);
}

int	ft_is_int(const char *nptr)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((*(nptr + i) >= 9 && *(nptr + i) <= 13) || *(nptr + i) == 32)
		i++;
	if (*(nptr + i) == ' ' || *(nptr + i) == '-' || *(nptr + i) == '+')
	{
		if (*(nptr + i) == '-')
			sign = -1;
		i++;
	}
	while (*(nptr + i) != '\0')
	{
		if (!ft_isdigit(*(nptr + i)) || res > INT_MAX / 10)
			return (0);
		res = (10 * res) + (*(nptr + i) - '0');
		if (res < 0 && !(res == INT_MIN && sign == -1))
			return (0);
		i++;
	}
	return (sign * res);
}

int	ft_atoi_zero(const char *nptr)
{
	int	i;

	i = 0;
	if (*(nptr + i) == ' ' || *(nptr + i) == '-' || *(nptr + i) == '+')
		i++;
	while (*(nptr + i) == '0')
		i++;
	if (*(nptr + i) == '\0')
		return (0);
	return (1);
}
