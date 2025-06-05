/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:32:22 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/04 14:32:24 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog()
{
    std::cout << "Default constructor of Dog called\n";
    _type = "dog";
}

Dog::Dog(Dog const &src)
{
    std::cout << "Constructor copy of Dog called\n";
    this->_type = src._type;    
}

Dog &Dog::operator=(Dog const &src)
{
    std::cout << "Affection operator of Dog called\n";
    this->_type = src._type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Destructor of Dog called\n";
}

void Dog::makeSound() const
{
    std::cout << "bark bark !\n";
}