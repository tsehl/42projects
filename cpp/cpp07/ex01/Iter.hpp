/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:59:23 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/24 17:59:25 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(T *tab, size_t arrSize, void (*f)(T &))
{
	size_t	i;

	i = 0;
	while (i < arrSize)
	{
		f(tab[i]);
		i++;
	}
	return ;
}

template<typename T>
void	iter(T *tab, size_t arrSize, void (*f)(const T &))
{
	size_t	i;

	i = 0;
	while (i < arrSize)
	{
		f(tab[i]);
		i++;
	}
	return ;
}

template<typename T>
void	multiply(T &x)
{
	x *= 2;
}

#endif
