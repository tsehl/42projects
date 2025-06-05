/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:00:58 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 14:01:01 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	size_t	size;

	if (!s)
		return (0);
	size = ft_strlen(s);
	if (size < start)
		len = 0;
	else if (start + len >= size)
		len = size - start;
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (0);
	i = 0;
	while (i < len && s[start + i])
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
