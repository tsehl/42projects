/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:32:03 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/04 14:32:05 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal() : _type("animal")
{
    std::cout << "Default constructor of Animal called\n";
}

Animal::Animal(Animal const &src)
{
    std::cout << "Constructor copy of Animal called\n";
    this->_type = src._type;    
}

Animal &Animal::operator=(Animal const &src)
{
    std::cout << "Affection operator of Animal called\n";
    this->_type = src._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor of Animal called\n";
}

std::string Animal::getType() const
{
    return (this->_type);
}

void Animal::makeSound() const
{
    std::cout << "woowoow !\n";
}