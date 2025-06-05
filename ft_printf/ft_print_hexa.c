/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:13:30 by thsehl            #+#    #+#             */
/*   Updated: 2022/08/12 16:13:32 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pt_hexa_min(va_list *ap, t_variable *vr)
{
	int				i;
	char			str[40];
	unsigned long	nbr;
	int				size;
	unsigned int	n;

	size = 0;
	nbr = va_arg(*ap, int);
	n = nbr;
	while (n)
		n /= 16 + 0 * size++;
	if (!size)
		str[size++] = '0';
	str[size] = '\0';
	i = size;
	ft_writehexa_min(i, nbr, str);
	write(1, &str, ft_strlen(str));
	vr->cpt += ft_strlen(str);
}

void	ft_pt_hexa_maj(va_list *ap, t_variable *vr)
{
	int				i;
	char			str[20];
	unsigned long	nbr;
	int				size;
	unsigned int	n;

	size = 0;
	nbr = va_arg(*ap, int);
	n = nbr;
	while (n)
		n /= 16 + 0 * size++;
	if (!size)
		str[size++] = '0';
	str[size] = '\0';
	i = size;
	ft_writehexa_maj(i, nbr, str);
	write(1, &str, ft_strlen(str));
	vr->cpt += ft_strlen(str);
}

void	ft_pt_ptr(va_list *ap, t_variable *vr)
{
	char				str[40];
	unsigned long long	nbr;
	int					size;
	unsigned long		n;

	size = 0;
	nbr = (unsigned long)va_arg(*ap, void *);
	n = nbr;
	while (n)
		n /= 16 + 0 * size++;
	if (!size)
		str[size++] = '0';
	str[size] = '\0';
	ft_writehexa_min(size, nbr, str);
	write(1, "0x", 2);
	vr->cpt += 2;
	write(1, &str, ft_strlen(str));
	vr->cpt += ft_strlen(str);
}

char	*ft_writehexa_min(int i, unsigned long long nbr, char *str)
{
	while (i--)
	{
		if (nbr % 16 < 10)
			str[i] = (nbr % 16) + 48;
		else
			str[i] = (nbr % 16) + 87;
		nbr /= 16;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_writehexa_maj(int i, unsigned long long nbr, char *str)
{
	while (i--)
	{
		if (nbr % 16 < 10)
			str[i] = (nbr % 16) + 48;
		else
			str[i] = (nbr % 16) + 55;
		nbr /= 16;
	}
	str[i] = '\0';
	return (str);
}
