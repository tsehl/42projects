/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:32:41 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/28 11:59:35 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("colibri")
{
    std::cout << "Default constructor of WrongAnimal called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << "Constructor copy of WrongAnimal called\n";
    this->_type = src._type;    
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
    std::cout << "Affection operator of WrongAnimal called\n";
    this->_type = src._type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor of WrongAnimal called\n";
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "giii giii!\n";
}