/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_char_to_string.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:20:11 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:20:13 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*empty_str_realloc(char c)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * 2);
	if (!new)
		return (NULL);
	new[0] = c;
	new[1] = '\0';
	return (new);
}

char	*ft_add_char_to_string(char *str, char c)
{
	char	*new;
	int		i;

	i = 0;
	new = NULL;
	if (!str)
		return (empty_str_realloc(c));
	new = (char *)malloc(sizeof(char) * (ft_strlen(str) + 2));
	if (!new)
	{
		free(str);
		return (NULL);
	}
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = c;
	new[i + 1] = '\0';
	free(str);
	return (new);
}
