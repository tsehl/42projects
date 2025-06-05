/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:22:00 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:22:03 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*tmp_s;

	if (!s || n <= 0)
		return (0);
	i = 0;
	tmp_s = (char *)s;
	while (i < n)
	{
		if (tmp_s[i] == c)
			return (&tmp_s[i]);
		i++;
	}
	return (0);
}
