/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin_ter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:08:03 by dlescart          #+#    #+#             */
/*   Updated: 2023/02/14 11:13:31 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

char	*ft_take_env(char **env, t_counter *count, char *line)
{
	char	*str;

	free(line);
	count->k = 0;
	str = malloc(sizeof(char) * ft_strlen(env[count->i]));
	if (!str)
		return (NULL);
	count->j++;
	while (env[count->i][count->j])
		str[count->k++] = env[count->i][count->j++];
	str[count->k] = '\0';
	return (str);
}

void	sig_int(int signum)
{
	signum = 0;
	rl_replace_line("", 0);
	if (g_data.cmd_arg == 1)
		printf("\n");
	else
		printf(PROMPT"                     \n");
	rl_on_new_line();
	if (g_data.cmd_arg != 1)
		rl_redisplay();
}

int	ft_ignor_pipe(char *str)
{
	int	i;

	i = 0;
	if (!str + 1)
		return (0);
	if (*str == '\"' && ft_strchr(str + 1, '\"'))
	{
		while (str[i] != '\"')
			i++;
		return (i);
	}
	else if (*str == '\'' && ft_strchr(str + 1, '\''))
	{
		while (str[i] != '\'')
			i++;
		return (i);
	}
	return (0);
}

char	*ft_getenv(char **env, char *var)
{
	t_counter	count;
	char		*str;

	count.i = 0;
	while (env[count.i] != NULL)
	{
		str = malloc(sizeof(char) * ft_strlen(env[count.i]));
		if (!str)
			return (NULL);
		count.j = 0;
		count.k = 0;
		while (env[count.i][count.j] && env[count.i][count.j] != '=')
			str[count.k++] = env[count.i][count.j++];
		str[count.k] = '\0';
		if (!ft_strcmp(var, str))
			return (ft_take_env(env, &count, str));
		count.i++;
	}
	return (NULL);
}
