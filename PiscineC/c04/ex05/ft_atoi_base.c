/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:51:05 by thsehl            #+#    #+#             */
/*   Updated: 2022/02/15 17:51:10 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strchr(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_error(char *base, char *str)
{
	int	i;
	int	j;

	i = 0;
	if (!base || !str || ft_strlen(base) < 2)
		return (1);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] > 8 && base[i] < 14) || base[i] == 32)
			return (1);
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
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
	sign = (sign % 2) * -1;
	if (sign == 0)
		sign = 1;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	nbr = 0;
	if (ft_error(base, str))
		return (0);
	while (str[i] && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
		i++;
	sign = ft_sign(str, i);
	while (str[i] && (str[i] == '+' || str[i] == '-'))
		i++;
	while (str[i] && ft_strchr(str[i], base) > -1)
	{
		nbr *= ft_strlen(base);
		nbr += ft_strchr(str[i++], base) * sign;
	}
	return (nbr);
}
