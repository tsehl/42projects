/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:36:23 by thsehl            #+#    #+#             */
/*   Updated: 2022/05/10 14:39:16 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_size_n(long n)
{
	int						size_n;

	size_n = 0;
	if (n <= 0)
		size_n = 1;
	while (n != 0)
	{
		n /= 10;
		size_n++;
	}
	return (size_n);
}

char	*ft_itoa(int n)
{
	unsigned int			nb;
	int						len;
	char					*str;
	int						sign;

	len = ft_size_n(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	sign = 0;
	if (n < 0)
		sign = 1;
	nb = n;
	if (n < 0)
		nb = -n;
	str[len--] = '\0';
	while (len >= 0)
	{
		str[len] = (nb % 10) + 48;
		nb /= 10;
		len--;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
