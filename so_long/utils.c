/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:44:14 by thsehl            #+#    #+#             */
/*   Updated: 2023/02/02 10:44:16 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

char	*ft_strdup(const char *s)
{
	char	*copy;
	char	*start;

	copy = (char *)malloc(sizeof(*copy) * (ft_strlen(s) + 1));
	if (!copy)
		return (NULL);
	start = copy;
	while (*s)
	{
		*copy = *s;
		copy++;
		s++;
	}
	*copy = '\0';
	return (start);
}

int	error_message(void)
{
	write(1, ERROR_MSG, ft_strlen(ERROR_MSG));
	return (1);
}
