/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:05:28 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/27 13:05:31 by thsehl           ###   ########.fr       */
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