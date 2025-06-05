/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:15:57 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/16 15:16:00 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include "./Weapon.hpp"

class HumanA
{
    public:
            HumanA(std::string, Weapon &weapon);
            ~HumanA(void);
            
            void attack(void) const;
            
    private:

        std::string _name;
        Weapon &_weapon;
};

#endif