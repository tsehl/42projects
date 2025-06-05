/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:14:45 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/16 15:14:48 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main()
{
    Zombie *zombies = zombieHorde(19, "john");
    for (int i = 0; i < 19; i++)
        zombies->announce();
    delete [] zombies;
}