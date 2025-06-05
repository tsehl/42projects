/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:28:08 by thsehl            #+#    #+#             */
/*   Updated: 2022/02/24 17:28:25 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_sign(char *str, int i)
{
	int	sign;

	sign = 0;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	sign = sign % 2;
	return (sign);
}

int	ft_atoi(char *str)
{
	unsigned int	nbr;
	int				nb;
	int				i;
	int				sign;

	i = 0;
	nbr = 0;
	if (!str)
		return (0);
	while (str[i] && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
		i++;
	sign = ft_sign(str, i);
	while (str[i] && (str[i] == '+' || str[i] == '-'))
		i++;
	while (str[i] && str[i] < 58 && str[i] > 47)
		nbr = nbr * 10 + (str[i++] - 48);
	if (sign == 1)
		nb = -1 * nbr;
	else
		nb = nbr;
	return (nb);
}
