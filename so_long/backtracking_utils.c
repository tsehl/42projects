/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:43:19 by thsehl            #+#    #+#             */
/*   Updated: 2023/02/02 10:43:22 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free_tab(char **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(tab[i++]);
	free(tab);
}

int	ft_free_map(t_map *map)
{
	if (map->board)
		ft_free_tab(map->board, map->height + 1);
	free(map);
	return (-1);
}

char	**ft_cpy_tab(char **tab, int height)
{
	char	**tab2;
	int		i;

	i = 0;
	tab2 = malloc(sizeof(char *) * (height +1));
	if (!tab2)
		return (NULL);
	while (i < height)
	{
		tab2[i] = ft_strdup(tab[i]);
		i++;
	}
	tab2[i] = 0;
	return (tab2);
}
