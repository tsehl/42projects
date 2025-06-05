/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FIxed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:37:10 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/22 11:37:13 by thsehl           ###   ########.fr       */
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
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedInt / (1 << _bits));
}

int		Fixed::toInt(void) const
{
	return (this->_fixedInt >> _bits);
}

bool Fixed::operator>(Fixed const &src) const
{
	return (this->toFloat() > src.toFloat());
}

bool Fixed::operator<(Fixed const &src) const
{
	return (this->toFloat() < src.toFloat());
}

bool Fixed::operator>=(Fixed const &src) const
{
	return (this->toFloat() >= src.toFloat());
}

bool Fixed::operator<=(Fixed const &src) const
{
	return (this->toFloat() <= src.toFloat());
}

bool Fixed::operator==(Fixed const &src) const
{
	return (this->toFloat() == src.toFloat());
}

bool Fixed::operator!=(Fixed const &src) const
{
	return (this->toFloat() != src.toFloat());
}

Fixed	Fixed::operator+(Fixed const &src)
{
	return (this->toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(Fixed const &src)
{
	return (this->toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(Fixed const &src)
{
	return (this->toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(Fixed const &src)
{
	return (this->toFloat() / src.toFloat());
}

Fixed	Fixed::operator++(int) 
{
	Fixed tmp;
	tmp._fixedInt = this->_fixedInt++;
	return (tmp);
}

Fixed &Fixed::operator++(void)
{
	this->_fixedInt++;
	return(*this);
}

Fixed	&Fixed::operator--(void) 
{
	this->_fixedInt--;
	return (*this);
}

Fixed	Fixed::operator--(int) 
{
	Fixed tmp;
	tmp._fixedInt = this->_fixedInt--;
	return (tmp);
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

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
