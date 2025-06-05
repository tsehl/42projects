/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edit_tab_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 03:44:49 by dlescart          #+#    #+#             */
/*   Updated: 2023/02/14 11:11:18 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	ft_edit_tab_arg(t_parse *parse, char **tab_str)
{
	t_var_edit_tab_arg	vr;

	vr.i = 0;
	while (parse->tab_arg[vr.i] != NULL)
	{
		if (!ft_strcmp(parse->tab_arg[0], "cat") && parse->tab_arg[1] == NULL)
			g_data.cmd_arg = 1;
		if (tab_str[vr.i][0] != '\0')
		{
			free(parse->tab_arg[vr.i]);
			parse->tab_arg[vr.i] = ft_strdup(tab_str[vr.i]);
			vr.j = 0;
			vr.save_i = vr.i + 1;
			while (parse->tab_arg[vr.save_i + nb_spaces(tab_str[vr.i])] != NULL)
			{
				free(parse->tab_arg[vr.save_i]);
				parse->tab_arg[vr.save_i]
					= ft_strdup(parse->tab_arg[nb_spaces(tab_str[vr.i])
						+ vr.save_i]);
				vr.save_i++;
			}
			parse->tab_arg[vr.save_i] = NULL;
		}
		vr.i++;
	}
}
