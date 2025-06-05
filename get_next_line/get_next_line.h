/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 12:51:59 by thsehl            #+#    #+#             */
/*   Updated: 2022/08/17 18:10:49 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
void	ft_bzero(void *s, size_t n);
int		ft_strlen(const char *s);
char	*get_next_line(int fd);
void	ft_cut(char *buffer);

#endif