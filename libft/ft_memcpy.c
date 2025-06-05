/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:36:39 by thsehl            #+#    #+#             */
/*   Updated: 2022/05/10 14:39:16 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest1;
	char	*src1;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest1 = (char *)dest;
	src1 = (char *)src;
	while (n > 0)
	{
		if (*dest1 != *src1)
			*dest1 = *src1;
		dest1++;
		src1++;
		n--;
	}
	return (dest);
}
