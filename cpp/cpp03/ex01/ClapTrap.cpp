/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:05:04 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/27 13:05:07 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Claptrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor of Claptrap called\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor of Claptrap called\n"; 
}

ClapTrap::ClapTrap(ClapTrap const &src) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
    std::cout << "Copy constructor of Claptrap called\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
    std::cout << "Affectation operator of Claptrap called\n";
    
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;

    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor of Claptrap called\n";
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_attackDamage > 0 && this->_energyPoints > 0)
    {
        std::cout << "Claptrap: " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!\n";
        this->_energyPoints--;
        std::cout << "Claptrap: " << this->_name << " has " << this->_energyPoints << " energy points left\n";
    }
    else
        std::cout << "Claptrap: " << this->_name << " doesnt have enough points of damage or points of energy to attack " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_hitPoints -= amount;
    if (this->_hitPoints > 0)
        std::cout << this->_name << " takes " << amount << " points of damage " << this->_hitPoints << " hit points left\n";
    else
        std::cout << this->_name << " died\n";   
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints < 1)
        std::cout << this->_name << " is dead so it can't be repaired\n";
    else if (this->_energyPoints < 1)
        std::cout << this->_name << " doesnt have enough energy to be repaired\n";
    else
    {   
        std::cout << this->_name << " cured of " << amount << " hit points\n";
        this->_energyPoints--;
        this->_hitPoints += amount;
        std::cout << this->_name << " has " << this->_energyPoints << " energy points left and " << this->_hitPoints << " hit points left\n";
    }
        
}