/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_add.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:07:58 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:08:03 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

char	*ft_realloc_add(char *old, char c)
{
	int		i;
	char	*new;

	i = -1;
	if (!old)
	{
		old = (char *)malloc(sizeof(char) * 2);
		if (!old)
			return (NULL);
		old[0] = c;
		old[1] = '\0';
		return (old);
	}
	new = (char *)malloc(sizeof(char) * (ft_strlen(old) + 2));
	if (!new)
		return (NULL);
	while (old[++i])
		new[i] = old[i];
	new[i] = c;
	new[i + 1] = '\0';
	if (old)
		free(old);
	return (new);
}
