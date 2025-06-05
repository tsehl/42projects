/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:14:59 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/16 15:15:02 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " died !\n";
}

std::string Zombie::get_name(void)
{
    return (this->name);
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
