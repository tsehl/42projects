/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <dolescar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:18:13 by dlescart          #+#    #+#             */
/*   Updated: 2023/02/08 17:47:36 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	ft_free(t_parse *parse)
{
	int	i;

	i = 0;
	while (parse->tab_arg[i] != NULL)
		free(parse->tab_arg[i++]);
	if (parse->tab_arg)
		free(parse->tab_arg);
	i = 0;
	while (parse->tab_cmd[i] != NULL)
		free(parse->tab_cmd[i++]);
	if (parse->tab_cmd)
		free(parse->tab_cmd);
	i = 0;
	while (parse->tab_path[i] != NULL)
		free(parse->tab_path[i++]);
	if (parse->tab_path)
		free(parse->tab_path);
	return (0);
}

void	ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return ;
	while (tab[i] != NULL)
		ft_secur_free(tab[i++]);
	ft_secur_free(tab);
}

void	ft_secur_free(void *data)
{
	if (!data)
		return ;
	free(data);
}

void	ft_norm(t_parse *parse)
{
	close(parse->fd[1]);
	if (parse->tab_arg[0] == NULL)
	{
		ft_free_tab(parse->tab_arg);
		return ;
	}
	ft_free_tab(parse->tab_arg);
	ft_secur_free(parse->redo);
	ft_secur_free(parse->redin);
}

void	init_parse(t_parse *parse, int i)
{
	parse->redir_out = 0;
	parse->redir_in = 0;
	parse->tab_arg = ft_split_custom(parse->tab_cmd[i], ' ', parse);
}
