/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:20:27 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:20:29 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char *str, int i)
{
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	return (i);
}

static unsigned long	ft_convert(const char *str, int i, unsigned long result)
{
	while ((str[i] >= '0' && str[i] <= '9') && str[i]
		&& result <= LONG_MAX + (unsigned long)1)
	{
		result = result * 10;
		result = result + (str[i] - 48);
		i++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				is_n;
	unsigned long	result;

	if (!str)
		return (0);
	i = 0;
	is_n = 0;
	result = 0;
	i = ft_isspace(str, i);
	if (str[i] == '-')
		is_n = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	result = ft_convert(str, i, result);
	if (result > LONG_MAX && is_n == 0)
		return (-1);
	if (result > LONG_MAX + (unsigned long)1 && is_n == 1)
		return (0);
	if (is_n == 1)
		return ((int)result * -1);
	return ((int)result);
}
