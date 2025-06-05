/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:21:54 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:21:57 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;

	if (!dst || !src)
		return (0);
	i = 0;
	tmp_src = (unsigned char *)src;
	tmp_dst = (unsigned char *)dst;
	while (i < n && (unsigned char)tmp_src[i] != (unsigned char)c)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	if (i == n)
		return (NULL);
	tmp_dst[i] = tmp_src[i];
	return (&tmp_dst[i + 1]);
}
