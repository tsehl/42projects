/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:16:10 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/16 15:16:12 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include "./Weapon.hpp"

class HumanB
{
    public:
            HumanB(std::string);
            ~HumanB();
            
            void attack(void) const;
            void setWeapon(Weapon &weapon);
            
    private:

        std::string _name;
        Weapon *_weapon;
};

#endif