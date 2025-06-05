/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:55:43 by thsehl            #+#    #+#             */
/*   Updated: 2022/02/22 18:11:34 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	ft_strchr(char c, char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_str_cpt(char *str, char *charset)
{
	int	i;
	int	cpt;

	cpt = 0;
	i = 0;
	if (!charset)
		return (0);
	while (str[i])
	{
		if (ft_strchr(str[i], charset))
			cpt++;
		i++;
	}
	return (cpt);
}

char	*ft_strdup_to_sep(char *str, char *charset, int index)
{
	int		i;
	int		size;
	char	*split;

	i = 0;
	size = 0;
	while (str[index + size] && !ft_strchr(str[index + size], charset))
		size++;
	split = malloc(sizeof(char) * (size + 1));
	if (!split || i < 0)
		return (0);
	while (i < size)
	{
		split[i] = str[index + i];
		i++;
	}
	split[i] = 0;
	return (split);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		a;
	int		i;

	i = 0;
	a = -1;
	if (!str || !charset)
		return (0);
	split = malloc(sizeof(char *) * (ft_str_cpt(str, charset) + 2));
	if (!split)
		return (0);
	while (str[i] && ft_strchr(str[i], charset))
			i ++;
	while (str[i] && ++a > -10)
	{
		split[a] = ft_strdup_to_sep(str, charset, i);
		if (!split[a])
			return (0);
		while (str[i] && !ft_strchr(str[i], charset))
			i++;
		while (str[i] && ft_strchr(str[i], charset))
			i++;
	}
	split[++a] = 0;
	return (split);
}
