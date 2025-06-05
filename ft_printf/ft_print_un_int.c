/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_un_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:13:11 by thsehl            #+#    #+#             */
/*   Updated: 2022/08/12 16:13:11 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pt_un_int(va_list *ap, t_variable *vr)
{
	long	nbr;
	int		len_nb;

	nbr = va_arg(*ap, int);
	if (nbr < 0)
		nbr += 4294967296;
	len_nb = ft_size_n(nbr);
	vr->cpt += ft_print_nbr(nbr);
	vr->cpt += len_nb;
}
