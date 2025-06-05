/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:23:11 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:23:14 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_display_number(char *str, t_flags flags)
{
	int	char_count;

	char_count = 0;
	if (flags.dot >= 0)
		char_count += ft_flags_display(flags.dot - 1, ft_strlen(str) - 1, 1);
	char_count += ft_putstrn(str, ft_strlen(str));
	return (char_count);
}

static int	ft_treat_u_int(char *str, t_flags flags)
{
	int	char_count;

	char_count = 0;
	if (flags.minus == 1)
		char_count += ft_display_number(str, flags);
	if (flags.dot >= 0 && (size_t)flags.dot < ft_strlen(str))
		flags.dot = ft_strlen(str);
	if (flags.dot >= 0)
	{
		flags.width -= flags.dot;
		char_count += ft_flags_display(flags.width, 0, 0);
	}
	else if (flags.star == 1 && flags.minus == 1)
		char_count += ft_flags_display(flags.width, ft_strlen(str), 0);
	else
		char_count += ft_flags_display(flags.width, ft_strlen(str), flags.zero);
	if (flags.minus == 0)
		char_count += ft_display_number(str, flags);
	return (char_count);
}

int	ft_print_unsigned_int(unsigned int nbr, t_flags flags)
{
	int		char_count;
	char	*str;

	char_count = 0;
	if (flags.dot == 0 && nbr == 0)
	{
		char_count += ft_flags_display(flags.width, 0, 0);
		return (char_count);
	}
	str = ft_uitoa(nbr);
	char_count += ft_treat_u_int(str, flags);
	free(str);
	return (char_count);
}
