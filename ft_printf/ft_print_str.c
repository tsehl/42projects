/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:13:18 by thsehl            #+#    #+#             */
/*   Updated: 2022/08/12 16:13:18 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pt_str(va_list *ap, t_variable *vr)
{
	char	*str;

	str = va_arg(*ap, char *);
	if (!str)
		str = "(null)";
	write(1, str, ft_strlen(str));
	vr->cpt += ft_strlen(str);
}
