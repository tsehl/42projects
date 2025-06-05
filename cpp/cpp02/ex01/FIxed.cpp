/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FIxed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:36:47 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/22 11:36:50 by thsehl           ###   ########.fr       */
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

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedInt = n * (1 << _bits);
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedInt = roundf((float)n * (1 << _bits));
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_fixedInt = src.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &fix)
{
	os << fix.toFloat();
	return (os);
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

float	Fixed::toFloat(void) const
{
	float n;
	n = (float)this->_fixedInt / (1 << _bits);
	return (n);
}

int		Fixed::toInt(void) const
{
	return (this->_fixedInt >> _bits);
}