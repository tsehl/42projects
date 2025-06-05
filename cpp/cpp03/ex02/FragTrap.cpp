/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:05:43 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/27 13:05:45 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_name = "Kobeni";
    this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
    std::cout << "Default constructor of FragTrap called\n";
}

FragTrap::FragTrap(std::string name)
{
    this->_name = name;
    this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
    std::cout << "Constructor of FragTrap called\n"; 
}

FragTrap::FragTrap(FragTrap const &src)
{
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;

	*this = src;
    std::cout << "Copy constructor of FragTrap called\n";
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
    std::cout << "Affectation operator of FragTrap called\n";
    
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;

    return (*this);
}
 FragTrap::~FragTrap()
 {
    std::cout << "Destructor of Fragtrap called\n";
 }

void FragTrap::highFivesGuys(void)
{
    std::cout << this->_name << " wants an High fives\n";
}