/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:42:38 by dolescar          #+#    #+#             */
/*   Updated: 2022/02/22 13:40:50 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_malloc(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	if (!strs || !sep)
		return (NULL);
	while (i < size)
		len += ft_strlen(strs[i++]) + ft_strlen(sep);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	j = 0;
	str = ft_malloc(size, strs, sep);
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k] != '\0')
			str[j++] = strs[i][k++];
		k = 0;
		while (sep[k])
			str[j++] = sep[k++];
		i++;
	}
	str[j - ft_strlen(sep)] = '\0';
	return (str);
}
