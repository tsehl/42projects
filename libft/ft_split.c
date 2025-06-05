/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:37:30 by thsehl            #+#    #+#             */
/*   Updated: 2022/06/17 13:45:34 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_a_word(char c, char c2)
{
	if (c == c2)
		return (1);
	return (0);
}

static int	cpt_word(const char *str, char c)
{
	int	cpt;
	int	i;

	i = 0;
	cpt = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] != 0 && is_a_word(str[i], c))
			i++;
		if (str[i] != 0)
			cpt++;
		while (str[i] != 0 && !is_a_word(str[i], c))
			i++;
	}
	return (cpt);
}

static int	len_word(const char *str, int index, char c)
{
	int	cpt;

	cpt = 0;
	while (str[index] && !is_a_word(str[index], c))
	{
		index++;
		cpt++;
	}
	return (cpt);
}

static int	ft_malloc(char const *str, char c, char **tab, t_indice indice)
{
	int	i;

	i = 0;
	tab[indice.j] = malloc(sizeof(char) * len_word(str, indice.i, c) + 1);
	if (!tab[indice.j])
	{
		while (i < indice.j)
		{
			free(tab[i]);
			i++;
		}
		free(tab);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *str, char c)
{
	char		**tab;
	t_indice	indice;

	tab = malloc(sizeof(char *) * (cpt_word(str, c) + 1));
	if (!tab || !str)
		return (NULL);
	indice.i = 0;
	indice.j = 0;
	while (str[indice.i] && cpt_word(str, c) != 0)
	{
		while (str[indice.i] && is_a_word(str[indice.i], c))
			indice.i++;
		if (!ft_malloc(str, c, tab, indice))
			return (NULL);
		indice.k = 0;
		while (str[indice.i] && !is_a_word(str[indice.i], c))
			tab[indice.j][indice.k++] = str[indice.i++];
		while (str[indice.i] && is_a_word(str[indice.i], c))
			indice.i++;
		tab[indice.j][indice.k] = '\0';
		indice.j++;
	}
	tab[indice.j] = 0;
	return (tab);
}
