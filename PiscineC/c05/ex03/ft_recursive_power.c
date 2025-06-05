/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:07:00 by thsehl            #+#    #+#             */
/*   Updated: 2022/02/17 19:07:29 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (temp * ft_recursive_power(nb, power - 1));
}
