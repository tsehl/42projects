/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:06:53 by thsehl            #+#    #+#             */
/*   Updated: 2022/02/17 19:07:29 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	n = nb;
	while (i < power)
	{
		n *= nb;
		i++;
	}
	return (n);
}
