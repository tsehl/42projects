/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:07:26 by thsehl            #+#    #+#             */
/*   Updated: 2022/02/17 19:07:29 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (i <= nb / 5)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	else
		return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (!(ft_is_prime(i)))
		i++;
	return (i);
}
