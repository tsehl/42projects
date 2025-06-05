/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:10:48 by thsehl            #+#    #+#             */
/*   Updated: 2022/02/15 15:10:54 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_base_hexa(char tab[])
{
	tab[0] = '0';
	tab[1] = '1';
	tab[2] = '2';
	tab[3] = '3';
	tab[4] = '4';
	tab[5] = '5';
	tab[6] = '6';
	tab[7] = '7';
	tab[8] = '8';
	tab[9] = '9';
	tab[10] = 'a';
	tab[11] = 'b';
	tab[12] = 'c';
	tab[13] = 'd';
	tab[14] = 'e';
	tab[15] = 'f';
}

char	find_hexa(char tab[], int indice)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (indice == i)
			return (tab[i]);
		i++;
	}
	return (0);
}

void	print_str(char *str, char base_hexa[])
{
	int		i;
	char	c;

	i = -1;
	while (str[++i])
	{
		c = find_hexa(base_hexa, str[i] % 16);
		if (str[i] < 16)
		{
			write(1, "\\", 1);
			write(1, "0", 1);
			write(1, &c, 1);
		}
		else if (str[i] < 32)
		{
			write(1, "\\1", 2);
			write(1, &c, 1);
		}
		else
			write(1, &str[i], 1);
	}	
}

void	ft_putstr_non_printable(char *str)
{
	char	base_hexa[16];

	if (!str)
		return ;
	init_base_hexa(base_hexa);
	print_str(str, base_hexa);
}
