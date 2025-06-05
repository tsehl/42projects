/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:59:16 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/24 17:59:19 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &left, T &right)
{
	T	tmp(left);

	left = right;
	right = tmp;
	return ;
}

template<typename T>
T const	&max(T const &left, T const &right)
{
	return ((left > right) ? left : right);
}

template<typename T>
T const	&min(T const &left, T const &right)
{
	return ((left < right) ? left : right);
}

#endif
