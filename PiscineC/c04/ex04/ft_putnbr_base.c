/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:50:47 by thsehl            #+#    #+#             */
/*   Updated: 2022/02/17 16:32:16 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_error(char *base, int nb)
{
	int	i;
	int	j;

	i = 0;
	if (!base || ft_strlen(base) < 2)
		return (1);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (nb == 0)
		write(1, &base[0], 1);
	return (0);
}

void	ft_neg(int nbr, unsigned int *n)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		*n = nbr * -1;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				size;
	unsigned int	n;
	unsigned int	i;
	char			c;

	i = 1;
	if (ft_error(base, nbr) || !nbr)
		return ;
	n = nbr;
	ft_neg(nbr, &n);
	size = ft_strlen(base);
	while (nbr >= size || nbr <= -size)
	{
		nbr = nbr / size;
		i = i * size;
	}
	while (i > 0)
	{
		c = base[n / i];
		write(1, &c, 1);
		n = n % i;
		i = i / size;
	}
}
