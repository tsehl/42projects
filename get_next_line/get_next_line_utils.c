/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:18:11 by thsehl            #+#    #+#             */
/*   Updated: 2022/08/17 18:06:29 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_cut(char *buffer)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	p = ft_strchr(buffer, '\n');
	if (!p)
		return ;
	while (p[j])
	{
		buffer[i++] = p[j++];
	}
	buffer[i] = '\0';
}

char	*ft_strchr(const char *str, int c)
{
	char	*s1;

	s1 = (char *)str;
	while (*s1)
	{
		if (*s1 == (char )c)
			return (s1 + 1);
		s1++;
	}
	if (c == '\0')
		return (s1);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s2)
		return (NULL);
	i = 0;
	j = 0;
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1 && s1[j])
		str[i++] = s1[j++];
	j = 0;
	while (s2 && s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	free(s1);
	return (str);
}

void	ft_bzero(void *s, size_t n)
{
	char	*t;
	size_t	i;

	t = s;
	i = 0;
	while (i < n)
	{
		t[i] = 0;
		i++;
	}
}

int	ft_strlen(const	char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}
