/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_tab_to_spaces.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:41:13 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 14:41:16 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

char	*swap_tab_to_space(t_data *data, char *str, int i, int j)
{
	char	*new;

	new = NULL;
	while (str[++i])
	{
		if (str[i] == '\t')
		{
			while (++j < TAB_SIZE)
			{
				new = ft_realloc_add(new, ' ');
				if (!new)
					ft_error(data, "Allocation failed");
			}
			j = 0;
		}
		else
		{
			new = ft_realloc_add(new, str[i]);
			if (!new)
				ft_error(data, "Allocation failed");
		}
	}
	if (str)
		free(str);
	return (new);
}
