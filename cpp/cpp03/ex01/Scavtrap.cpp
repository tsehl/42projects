/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:05:22 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/27 13:05:26 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_name = "Denji";
    this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
    std::cout << "Default constructor of Scavtrap called\n";
}

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
    std::cout << "Constructor of Scavtrap called\n"; 
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;

	*this = src;
    std::cout << "Copy constructor of Scavtrap called\n";
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
    std::cout << "Affectation operator of Scavtrap called\n";
    
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;

    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor of Scavtrap called\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_attackDamage > 0 && this->_energyPoints > 0)
    {
        std::cout << "Scavtrap: " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!\n";
        this->_energyPoints--;
        std::cout << "Scavtrap " << this->_name << " has " << this->_energyPoints << " energy points left\n";
    }
    else
        std::cout << "ScavTrap: " << this->_name << " doesnt have enough points of damage or points of energy to attack " << target << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->_name << " is now in Gate keeper mode\n";
}