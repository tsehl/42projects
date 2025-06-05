/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:33:19 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/04 14:33:27 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor of Brain called\n";
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "no idea";
}

Brain::Brain(Brain const &src)
{
    std::cout << "Constructor copy of Brain called\n";
    for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
}

Brain &Brain::operator=(Brain const &src)
{
    std::cout << "Affectation operator of Brain called\n";
    for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    return(*this); 
}

Brain::~Brain()
{
    std::cout << "Destructor of Brain called\n";
}