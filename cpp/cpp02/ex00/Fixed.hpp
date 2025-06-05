/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:36:28 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/22 11:36:31 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed 
{
    public:
        
        Fixed(void);
        Fixed(Fixed const &src);
        Fixed &operator=(Fixed const &src);
        ~Fixed(void);
        
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:

        int _fixedInt;
        static const int _bits = 8;
        
        
};

#endif