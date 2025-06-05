/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_comb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:22:04 by thsehl            #+#    #+#             */
/*   Updated: 2022/02/08 15:22:30 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nbr(char a, char b, char c)
{
	if (a < b && b < c)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != '7' || b != '8' || c != '9')
			write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				ft_print_nbr(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
