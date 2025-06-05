/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:36:46 by dlescart          #+#    #+#             */
/*   Updated: 2023/02/11 18:42:45 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	ft_env(char **env)
{
	int	i;

	i = 0;
	while (env[i] != NULL)
	{
		ft_putstr_fd(env[i++], 1);
		write(1, "\n", 1);
	}
}

void	ft_echo(t_parse *parse)
{
	int	i;

	i = 1;
	if (parse->tab_arg[1] != NULL && !ft_strcmp(parse->tab_arg[1], "-n"))
		i++;
	while (parse->tab_arg[i] != NULL)
	{
		if (!ft_strcmp(parse->tab_arg[i], "$?"))
			ft_putstr_fd(ft_itoa(g_data.exit_status), 1);
		else
			ft_putstr_fd(parse->tab_arg[i], 1);
		i++;
		if (parse->tab_arg[i] != NULL)
			write(1, " ", 1);
	}
	if (parse->tab_arg[1] == NULL || ft_strcmp(parse->tab_arg[1], "-n"))
		write(1, "\n", 1);
	g_data.exit_status = 0;
}

char	*ft_pwd(void)
{
	char	*str;

	str = malloc(sizeof(char) * PATH_MAX + 1);
	str = getcwd(str, PATH_MAX);
	return (str);
}

void	ft_cd(t_parse *parse, char **env)
{
	char	*path;
	char	pwd[PATH_MAX];

	if (parse->tab_arg[1] == NULL || parse->tab_arg[1][0] == '~')
		path = ft_strdup(getenv("HOME"));
	else
		path = ft_strdup(parse->tab_arg[1]);
	if (!getcwd(pwd, PATH_MAX))
		path = NULL;
	ft_update_env(pwd, env, 1);
	if (!path)
		g_data.exit_status = ft_putstr_fd("parse error\n", 2);
	else if (chdir(path) == -1)
	{
		ft_putstr_fd(ft_strjoin("minishell: cd: ", path), 2);
		ft_putstr_fd(": ", 2);
		perror("");
		g_data.exit_status = 1;
	}
	free(path);
	if (!getcwd(pwd, PATH_MAX))
		return ;
	ft_update_env(pwd, env, 0);
}
