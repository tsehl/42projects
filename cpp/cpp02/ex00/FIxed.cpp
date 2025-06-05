/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FIxed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:36:23 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/22 11:36:26 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _fixedInt = 0;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_fixedInt = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_fixedInt);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedInt = raw;
	return ;
}