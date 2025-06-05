/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:36:52 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/22 11:36:54 by thsehl           ###   ########.fr       */
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

    private:

        int _fixedInt;
        static const int _bits = 8;
        
        
};

std::ostream	&operator<<(std::ostream &os, Fixed const &fix);

#endif