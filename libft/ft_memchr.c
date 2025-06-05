/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:36:28 by thsehl            #+#    #+#             */
/*   Updated: 2022/05/13 13:36:58 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sbis;

	sbis = (char *)s;
	while (n > 0)
	{
		if (*sbis == (char )c)
			return (sbis);
		sbis++;
		s++;
		n--;
	}
	return (NULL);
}
