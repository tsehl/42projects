/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:38:38 by thsehl            #+#    #+#             */
/*   Updated: 2022/05/10 14:39:16 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	int		i;

	if (!set)
		return (0);
	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_strlentrim(char const *str, char const *set)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (ft_isset(str[i], set))
		i++;
	while (str[i])
	{
		j++;
		i++;
	}
	i--;
	while (ft_isset(str[i], set))
	{
		i--;
		j--;
	}
	return (j);
}

static int	ft_cmpisset(const char *s1, char const *set)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (!(ft_isset(s1[i], set)))
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s1)
		return (NULL);
	if (!(ft_cmpisset(s1, set)))
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = malloc(sizeof(char) * (ft_strlentrim(s1, set) + 1));
	if (!str)
		return (NULL);
	while (ft_isset(s1[i], set))
		i++;
	while (j < ft_strlentrim(s1, set))
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
