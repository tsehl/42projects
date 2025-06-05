/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:13:55 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/16 15:14:01 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Zombie.hpp"

int main()
{
    Zombie zombie1("john");
    Zombie *zombie2 = newZombie("lennon");
    zombie1.announce();
    zombie2->announce();
    randomChump("Bernard");
    delete zombie2;
}