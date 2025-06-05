/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:38:19 by thsehl            #+#    #+#             */
/*   Updated: 2022/05/10 14:39:16 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*s_1;
	unsigned char	*s_2;

	s_1 = (unsigned char *)str1;
	s_2 = (unsigned char *)str2;
	while (n > 0 && (*s_1 || *s_2))
	{
		if (*s_1 < *s_2 || *s_1 == '\0')
			return (*s_1 - *s_2);
		if (*s_1 > *s_2 || *s_2 == '\0')
			return (*s_1 - *s_2);
		n--;
		s_1++;
		s_2++;
	}
	return (0);
}
