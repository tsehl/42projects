/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pourcent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:22:58 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:23:00 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pourcent(t_flags flags)
{
	int	char_count;

	char_count = 0;
	if (flags.minus == 1)
		char_count += ft_putstrn("%", 1);
	if (flags.minus == 1 && flags.star == 1)
		char_count += ft_flags_display(flags.width, 1, 0);
	else
		char_count += ft_flags_display(flags.width, 1, flags.zero);
	if (flags.minus == 0)
		char_count += ft_putstrn("%", 1);
	return (char_count);
}
