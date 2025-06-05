/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:36:44 by thsehl            #+#    #+#             */
/*   Updated: 2022/05/10 14:39:16 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*dest1;
	char	*src1;

	if (dest == NULL && src == NULL)
		return (NULL);
	if ((dest - src) > 0)
	{
		dest1 = (char *)dest + len - 1;
		src1 = (char *)src + len - 1;
		while (len > 0)
		{
			if (*dest1 != *src1)
				*dest1 = *src1;
			dest1--;
			src1--;
			len--;
		}
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
