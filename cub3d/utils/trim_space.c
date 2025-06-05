/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_space.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:01:16 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 14:01:19 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cube.h"

char	*trim_space(char *str)
{
	char	*new;

	new = ft_strtrim(str, " \n");
	if (!new)
		return (NULL);
	if (str)
		free(str);
	return (new);
}
