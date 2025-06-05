/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:34:33 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:34:38 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *str, int to_add)
{
	char	*new;
	int		len;

	len = 0;
	if (str)
	{
		while (str[len])
			len++;
	}
	new = malloc(sizeof(char) * (len + to_add));
	if (new)
	{
		len = -1;
		if (str)
		{
			while (str[++len])
				new[len] = str[len];
		}
		new[len] = 0;
	}
	free(str);
	str = NULL;
	return (new);
}
