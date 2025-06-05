/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:22:36 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:22:38 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c, t_flags flags)
{
	int	char_count;

	char_count = 0;
	if (flags.width > 1)
	{
		if (flags.minus == 0)
		{
			char_count += ft_flags_display(flags.width, 1, 0);
			char_count += ft_putchar_pf(c);
		}
		else
		{
			char_count += ft_putchar_pf(c);
			char_count += ft_flags_display(flags.width, 1, 0);
		}
	}
	else
		char_count += ft_putchar_pf(c);
	return (char_count);
}
