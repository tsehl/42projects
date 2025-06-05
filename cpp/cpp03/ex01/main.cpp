/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:05:13 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/27 13:05:15 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int main(void)
{
    ClapTrap makima("Makima");
    ScavTrap denji("Denji");
    makima.attack("Jack");
    makima.takeDamage(4);
    makima.takeDamage(3);
    makima.beRepaired(2);
    makima.attack("John");
    makima.beRepaired(8);

    denji.attack("Jack");
    denji.beRepaired(1);
    denji.takeDamage(5);
    denji.beRepaired(3);
    denji.guardGate();
}