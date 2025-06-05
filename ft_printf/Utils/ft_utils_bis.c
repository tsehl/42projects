/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_bis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:14:45 by thsehl            #+#    #+#             */
/*   Updated: 2022/08/12 16:14:47 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_fill_nb(char *format, char *nbr, int index, int i)
{
	while (ft_isdigit(format[index + i]))
	{
		nbr[i] = format[index + i];
		i++;
	}
	return (nbr);
}

int	ft_stock_nb(char *format, int index)
{
	int		i;
	int		nb;
	char	*nbr;
	int		zero;

	i = 0;
	zero = 0;
	i = 0;
	nbr = malloc(sizeof(int) * ft_size_nbr(format, index));
	if (!nbr)
		return (0);
	nb = ft_atoi(ft_fill_nb(format, nbr, index, i));
	free(nbr);
	return (nb);
}

int	ft_size_nbr(char *format, int index)
{
	int	i;

	i = 0;
	while (ft_isdigit(format[index++]))
		i++;
	return (i);
}

int	ft_print_nbr(long long nb)
{
	int	cpt;

	cpt = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_print_nbr(nb / 10);
	ft_putchar(nb % 10 + 48);
	return (cpt);
}
