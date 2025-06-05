/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:58:57 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 13:58:58 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_pf(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_char_to_int(char c)
{
	return (c - 48);
}

int	ft_flags_list(char c)
{
	if (c == '0' || c == '-' || c == '.' || c == '*')
		return (1);
	else if (c >= '1' && c <= '9')
		return (1);
	else
		return (-1);
}

int	ft_type_list(char c)
{
	if (c == 'd' || c == 'i' || c == 'u' || c == 'p' || c == 'x'
		|| c == 'X' || c == 'c' || c == 's' || c == '%')
		return (1);
	else
		return (0);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar_pf(str[i]);
		i++;
	}
	return (i);
}
