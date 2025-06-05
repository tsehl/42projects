/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:02:29 by thsehl            #+#    #+#             */
/*   Updated: 2022/02/10 15:03:16 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	find_min(int j, int size, int *min, int *tab)
{
	while (j < size)
	{
		if (tab[j] < tab[*min])
			*min = j;
		j++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	tmp;
	int	tmp2;

	i = 0;
	while (i < size)
	{
		j = i;
		min = i;
		tmp = tab[i];
		find_min(j, size, &min, tab);
		j = i;
		tab[j++] = tab[min];
		while (j <= min)
		{
			tmp2 = tab[j];
			tab[j++] = tmp;
			tmp = tmp2;
		}
		i++;
	}
}
