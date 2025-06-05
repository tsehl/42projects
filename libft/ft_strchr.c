/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:37:35 by thsehl            #+#    #+#             */
/*   Updated: 2022/05/13 13:37:14 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s1;

	s1 = (char *)str;
	while (*s1)
	{
		if (*s1 == (char )c)
			return (s1);
		s1++;
	}
	if (c == '\0')
		return (s1);
	return (NULL);
}
