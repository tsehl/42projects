/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:06:05 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/27 13:06:07 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "./ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
    public:
    
        ScavTrap();
        ScavTrap(std::string);
        ScavTrap(ScavTrap const &);
        ScavTrap& operator=(ScavTrap const &);
        ~ScavTrap();
        
        void attack(const std::string& target);
        void guardGate();

    
};

#endif