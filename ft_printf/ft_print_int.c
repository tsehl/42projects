/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:13:24 by thsehl            #+#    #+#             */
/*   Updated: 2022/08/12 16:13:24 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pt_int(va_list *ap, t_variable *vr)
{
	int	nbr;
	int	i;
	int	len_nb;

	i = 0;
	nbr = va_arg(*ap, int);
	len_nb = ft_size_n(nbr);
	vr->cpt += ft_print_nbr(nbr);
	vr->cpt += len_nb;
}
