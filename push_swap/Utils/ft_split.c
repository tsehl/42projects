/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsehl <tsehl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:20:36 by tsehl             #+#    #+#             */
/*   Updated: 2021/10/06 15:20:37 by tsehl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		++i;
	}
	return (0);
}

int	is_word(char c, char cbefore, char *charset)
{
	return (!is_separator(c, charset) && is_separator(cbefore, charset));
}

int	get_words_count(char *str, char *charset)
{
	int	words_count;
	int	i;

	i = 0;
	words_count = 0;
	while (str[i] != '\0')
	{
		if (is_word(str[i], str[i - 1], charset)
			|| (!is_separator(str[i], charset) && i == 0))
			words_count++;
		i++;
	}
	return (words_count);
}

int	*get_words_size(char *str, char *charset)
{
	int	index;
	int	i;
	int	words_count;
	int	*words_size;

	i = 0;
	words_count = get_words_count(str, charset);
	words_size = malloc(words_count * sizeof(int));
	while (i <= words_count)
	{
		words_size[i] = 0;
		i++;
	}
	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (!is_separator(str[i], charset))
			words_size[index]++;
		else if (i > 0 && !is_separator(str[i - 1], charset))
			index++;
		i++;
	}
	return (words_size);
}

char	**ft_split(char *str, char *charset)
{
	char			**words;
	t_split_compt	c;
	int				*words_size;

	words = malloc((get_words_count(str, charset) + 1) * sizeof(char *));
	words_size = get_words_size(str, charset);
	c.index = 0;
	c.j = 0;
	c.i = -1;
	while (str[++c.i] != '\0')
	{
		if (!is_separator(str[c.i], charset))
		{
			if (c.i == 0 || is_word(str[c.i], str[c.i - 1], charset))
				words[c.index] = malloc(words_size[c.index] * sizeof(char));
			words[c.index][c.j] = str[c.i];
			words[c.index][++c.j] = '\0';
		}
		else if (c.i > 0 && !is_separator(str[c.i - 1], charset) && ++c.index)
			c.j = 0;
	}
	words[get_words_count(str, charset)] = 0;
	free(words_size);
	return (words);
}
