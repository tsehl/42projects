/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:14:57 by thsehl            #+#    #+#             */
/*   Updated: 2022/08/12 16:15:25 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_find_index(char *tab, char element)
{
	int	index;

	index = 0;
	while (tab[index])
	{
		if (tab[index] == element)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_isflag(char c)
{
	if (c == 'c' || c == 's' || c == 'd'
		|| c == 'i' || c == 'p' || c == 'x' || c == 'X' || c == 'u')
		return (1);
	return (0);
}
