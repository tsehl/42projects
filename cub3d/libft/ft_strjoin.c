/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:50:51 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/12 14:03:50 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strscpy(const char *s1, const char *s2, char *s3)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		size;

	i = 0;
	size = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i])
		i++;
	size = i;
	i = 0;
	while (s2[i])
		i++;
	size = size + i;
	s3 = (char *)malloc(sizeof(char) * (size + 1));
	if (!s3)
		return (NULL);
	ft_strscpy(s1, s2, s3);
	return (s3);
}
