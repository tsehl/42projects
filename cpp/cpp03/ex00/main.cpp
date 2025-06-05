/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:03:56 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/27 13:03:58 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

int main()
{
    ClapTrap makima("Makima");

    makima.attack("Denji");
    makima.takeDamage(4);
    makima.takeDamage(3);
    makima.beRepaired(2);
    makima.attack("John");
    makima.beRepaired(8);
}