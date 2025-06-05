/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:35:22 by thsehl            #+#    #+#             */
/*   Updated: 2022/05/13 17:12:54 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_secur(const char *str, int i)
{
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == ' ' || str[i] == '\r')
		i++;
	return (i);
}

static int	overflow(unsigned	long long test, int sign)
{
	if (test >= 9223372036854775807)
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	i = ft_secur(str, i);
	if (i < 0)
		return (0);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && (str[i] > 47 && str[i] < 58)
		&& overflow(nb, 0) == 1)
		nb = nb * 10 + (str[i++] - 48);
	if (overflow(nb, sign) != 1)
		return (overflow(nb, sign));
	return (nb * sign);
}
