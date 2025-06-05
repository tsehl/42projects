/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:38:30 by thsehl            #+#    #+#             */
/*   Updated: 2022/05/13 13:37:21 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s1;

	s1 = (char *)str + ft_strlen(str);
	while (s1 != (str - 1))
	{
		if (*s1 == (char )c)
			return (s1);
		s1--;
	}
	return (NULL);
}
