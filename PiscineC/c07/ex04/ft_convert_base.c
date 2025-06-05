/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:55:08 by thsehl            #+#    #+#             */
/*   Updated: 2022/02/23 16:13:09 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);
int	ft_error(char *base, char *str);
int	ft_strlen(char *str);

char	*ft_fill_nbr(unsigned int nb, char *base_to,
	unsigned int size, int sign)
{
	int				i;
	char			*nbr;
	unsigned int	base;

	i = 0;
	base = ft_strlen(base_to);
	nbr = malloc(sizeof(char) * size + 1);
	if (!nbr)
		return (NULL);
	size = 1;
	if (sign < 0)
		nbr[i++] = '-';
	while (nb / size >= base)
		size *= base;
	while (size > 0)
	{
		nbr[i++] = base_to[nb / size];
		nb = nb % size;
		size = size / base;
	}
	nbr[i] = '\0';
	return (nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nb;
	int	nb_cpy;
	int	size;
	int	base;

	if (ft_error(base_from, nbr) || ft_error(base_to, nbr))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	base = ft_strlen(base_to);
	size = 1;
	nb_cpy = nb;
	while (nb_cpy > base && size ++)
		nb_cpy /= base;
	if (nb < 0)
		return (ft_fill_nbr(-nb, base_to, size + 1, -1));
	else
		return (ft_fill_nbr(nb, base_to, size + 1, 1));
}
