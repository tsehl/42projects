/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:50:08 by thsehl            #+#    #+#             */
/*   Updated: 2022/02/17 16:29:22 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
