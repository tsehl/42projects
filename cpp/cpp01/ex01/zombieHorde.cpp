/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:15:10 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/16 15:15:12 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombies = new Zombie[N];
    
    for (int i = 0; i < N; i++)
        zombies[i].set_name(name);
    
    return (zombies);
}