/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_display.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:20:38 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:20:40 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flags_display(int size, int minus, int type)
{
	int	i;

	i = 0;
	while (size - minus > 0)
	{
		if (type == 1)
			ft_putchar_pf('0');
		else
			ft_putchar_pf(32);
		size--;
		i++;
	}
	return (i);
}
