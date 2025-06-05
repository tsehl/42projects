/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:41:57 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/26 15:41:59 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception
{
	public :
		virtual const char *what() const throw()
		{
			return ("Not found!");
		}
} ;

template<typename T>
void	easyfind(T	&cont, int nbr)
{
	typename T::iterator	itr;

	itr = std::find(cont.begin(), cont.end(), nbr);
	if (itr != cont.end())
		std::cout << "Found occurence: " << *itr << std::endl;
	else
		throw(NotFoundException());	
	return ;
}

#endif
