/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:03:50 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/27 13:03:53 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:

        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &src);
        ClapTrap &operator=(ClapTrap const &src);
        ~ClapTrap();
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
    private:

        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
};

#endif