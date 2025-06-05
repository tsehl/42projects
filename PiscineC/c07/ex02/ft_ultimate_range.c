/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:19:52 by dolescar          #+#    #+#             */
/*   Updated: 2022/02/17 14:21:56 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = NULL;
	i = 0;
	if (min >= max)
		return (tab);
	tab = malloc(sizeof(*tab) * (max - min));
	if (!tab)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	*range = ft_range(min, max);
	if (range == NULL)
		return (-1);
	return (max - min);
}
