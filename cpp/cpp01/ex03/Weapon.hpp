/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:56:56 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/21 10:56:59 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon 
{
    public:
        
        Weapon(std::string);
        ~Weapon(void);
        
        std::string const &getType(void) const;
        void setType(std::string);
        
    private:

        std::string _type;
};

#endif