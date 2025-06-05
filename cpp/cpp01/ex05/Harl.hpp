/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:57:24 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/21 10:57:27 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    public:

        Harl(void);
        ~Harl(void);
        void complain(std::string level);
        
    private:

        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif