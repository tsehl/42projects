/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:37:18 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/22 11:37:20 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed 
{
    public:
        
        Fixed(void);
        Fixed(Fixed const &src);
        Fixed(const int);
        Fixed(const float n);
        Fixed &operator=(Fixed const &src);
        ~Fixed(void);
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

        bool operator>(Fixed const &src) const;
        bool operator<(Fixed const &src) const;
        bool operator>=(Fixed const &src) const;
        bool operator<=(Fixed const &src) const;
        bool operator==(Fixed const &src) const;
        bool operator!=(Fixed const &src) const;

		Fixed	operator+(Fixed const &src);
		Fixed	operator-(Fixed const &src);
		Fixed	operator*(Fixed const &src);
		Fixed	operator/(Fixed const &src);

        Fixed	operator++(int);
		Fixed	&operator++(void);
		Fixed	operator--(int);
		Fixed	&operator--(void);

        static Fixed const	&min(Fixed const &a, Fixed const &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed const	&max(Fixed const &a, Fixed const &b);
		static Fixed &max(Fixed &a, Fixed &b);

    private:

        int _fixedInt;
        static const int _bits = 8;
        
        
};

std::ostream	&operator<<(std::ostream &os, Fixed const &fix);

#endif