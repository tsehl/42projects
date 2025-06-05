/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:20:46 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:20:49 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag(const char *input, int i, t_flags *flags, va_list args)
{
	while (input[i])
	{
		if (!ft_isdigit(input[i]) && !ft_flags_list(input[i])
			&& !ft_type_list(input[i]))
			break ;
		if (input[i] == '0' && flags->width == 0 && flags->minus == 0)
			flags->zero = 1;
		if (input[i] == '.')
			i = ft_flag_dot(input, i, flags, args);
		if (input[i] == '-')
			*flags = ft_flag_minus(*flags);
		if (input[i] == '*')
			*flags = ft_flag_width(args, *flags);
		if (ft_isdigit(input[i]))
			*flags = ft_flag_digit(input[i], *flags);
		if (ft_type_list(input[i]))
		{
			flags->type = input[i];
			break ;
		}
		i++;
	}
	return (i);
}
