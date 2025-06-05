/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:50:58 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 14:03:42 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	cpt;

	i = 0;
	j = 0;
	cpt = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j])
		j++;
	cpt = i + j;
	if (i == size)
		return (cpt);
	j = 0;
	while (src[j] && (i + j) < (size - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (cpt);
}
