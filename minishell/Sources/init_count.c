/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_count.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:10:48 by dlescart          #+#    #+#             */
/*   Updated: 2023/02/14 11:25:13 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	init_count(t_counter *count)
{
	count->i = 0;
	count->j = 0;
	count->k = 0;
	count->l = 0;
	count->m = 0;
}

void	ft_ignor_red(t_parse *parse, char *str)
{
	int	i;
	int	j;

	parse->redir_ign = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i] == '\'' || str[i] == '\"') && ft_closed_quotes(str, i))
		{
			j = ft_closed_quotes(str, i);
			i++;
			while (i < j)
			{
				if (str[i] == '<' || str[i] == '>')
					parse->redir_ign = 1;
				i++;
			}
		}
		i++;
	}
}

void	ft_init_mini(t_parse *parse, char **cmd)
{
	if (!*cmd)
	{
		ft_putstr_fd("exit\n", 1);
		exit(1);
	}
	add_history(*cmd);
	ft_ignor_red(parse, *cmd);
	parse->tab_cmd = ft_split_pipe(*cmd);
	parse->cont_env = getenv("PATH");
	parse->tab_path = ft_split(parse->cont_env, ':');
}
