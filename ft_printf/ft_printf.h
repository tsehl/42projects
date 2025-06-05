/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:18:56 by thsehl            #+#    #+#             */
/*   Updated: 2022/08/12 16:18:59 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

//typedef struct t_variable t_variable;

typedef struct variable
{
	int	index;
	int	is_space;
	int	cpt;
	int	tmp_i;
}				t_variable;

int		ft_atoi(const char *str);
int		ft_isdigit(int c);
void	ft_putchar(char c);
void	ft_putnbr(long long nb);
int		ft_strlen(const char *s);
int		ft_find_index(char *tab, char element);
int		ft_isflag(char c);
int		ft_percent(char *format, int index, char *tab_index);
int		ft_size_nbr(char *format, int index);
void	ft_increment_index(char *format, int *index);
char	*ft_fill_nb(char *format, char *nbr, int index, int i);
int		ft_stock_nb(char *format, int index);
void	ft_pt_char(va_list *ap, t_variable *vr);
void	ft_pt_str(va_list *ap, t_variable *vr);
void	ft_pt_int(va_list *ap, t_variable *vr);
int		ft_print_nbr(long long nb);
void	ft_pt_un_int(va_list *ap, t_variable *vr);
int		ft_printf(const char *format, ...);
void	fill_tab_f(void (*tab_f[])(va_list *, t_variable *vr));
void	fill_tab_index(char tab_index[]);
void	ft_pt_int(va_list *ap, t_variable *vr);
int		ft_size_n(long n);
char	*ft_writehexa_maj(int i, unsigned long long nbr, char *str);
char	*ft_writehexa_min(int i, unsigned long long nbr, char *str);
void	ft_pt_ptr(va_list *ap, t_variable *vr);
void	ft_pt_hexa_maj(va_list *ap, t_variable *vr);
void	ft_pt_hexa_min(va_list *ap, t_variable *vr);

#endif
