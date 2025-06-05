/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:13:01 by thsehl            #+#    #+#             */
/*   Updated: 2022/08/12 16:13:05 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_initialize_struct(t_variable *vr)
{
	vr->is_space = 0;
	vr->index = 0;
	vr->cpt = 0;
	vr->tmp_i = 0;
}

void	ft_main2(char *format, t_variable *vr, char *tab_index)
{
	while (format[vr->index] == ' ')
		vr->index++;
	if (format[vr->index] == '%' && ft_percent((char *)
			format, vr->index, tab_index))
	{
		vr->cpt++;
		write(1, "%", 1);
		while (format[vr->index + 1] != '%' && format[vr->index + 1])
		{
			write(1, &format[vr->index + 1], 1);
			vr->index++;
			vr->cpt++;
		}
		if (format[vr->index + 1])
			vr->index++;
	}
	vr->tmp_i = ft_find_index(tab_index, format[vr->index]);
}

void	ft_pt_format(char *format, t_variable *vr)
{
	write(1, &format[vr->index], 1);
	vr->cpt++;
}

void	ft_main(char *format, t_variable *vr, char *tab_index,
	void (*tab_f[])(va_list *, t_variable *vr), va_list *ap)
{
	while (format[vr->index])
	{
		if (vr->index != 0 && format[vr->index - 1] == '%')
		{
			ft_main2((char *)format, vr, tab_index);
			if (vr->tmp_i != -1)
				(*tab_f[vr->tmp_i])(ap, vr);
		}
		else if (format[vr->index] != '%')
			ft_pt_format((char *)format, vr);
		vr->index++;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_variable	*vr;
	void		(*tab_f[8])(va_list *, t_variable*);
	char		tab_index[9];

	fill_tab_f(tab_f);
	fill_tab_index(tab_index);
	vr = malloc(sizeof(t_variable));
	if (!vr)
		return (0);
	ft_initialize_struct(vr);
	va_start(ap, format);
	ft_main((char *)format, vr, tab_index, tab_f, &ap);
	va_end(ap);
	free(vr);
	return (vr->cpt);
}
