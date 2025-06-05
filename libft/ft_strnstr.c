/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:38:26 by thsehl            #+#    #+#             */
/*   Updated: 2022/05/10 14:39:16 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	a;

	if (!*to_find)
		return ((char *)str);
	i = 0;
	while (str[i] != '\0')
	{
		if (i == len)
			return (NULL);
		a = 0;
		while (str[i + a] == to_find[a] && str[i + a] != '\0')
		{
			if ((i + a) == len)
				return (NULL);
			if (to_find[a + 1] == '\0')
				return ((char *)&str[i]);
			a++;
		}
		i++;
	}
	return (NULL);
}
