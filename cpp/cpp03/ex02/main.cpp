/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:05:51 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/27 13:05:53 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"
#include "./ClapTrap.hpp"

int main(void)
{
    ClapTrap makima("Makima");
    ScavTrap denji("Denji");
    FragTrap kobeni("Kobeni");
    
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

    kobeni.attack("John");
    kobeni.beRepaired(1);
    kobeni.takeDamage(15);
    kobeni.beRepaired(3);
    kobeni.highFivesGuys();
}