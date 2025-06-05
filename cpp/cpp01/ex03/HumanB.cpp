/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:16:05 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/16 15:16:07 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"
#include "./Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void) const 
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}


void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}