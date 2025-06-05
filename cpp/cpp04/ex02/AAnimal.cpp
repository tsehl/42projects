/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:34:06 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/04 14:34:09 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AAnimal.hpp"

AAnimal::AAnimal() : _type("animal")
{
    std::cout << "Default constructor of AAnimal called\n";
}

AAnimal::AAnimal(AAnimal const &src)
{
    std::cout << "Constructor copy of AAnimal called\n";
    this->_type = src._type;    
}

AAnimal &AAnimal::operator=(AAnimal const &src)
{
    std::cout << "Affection operator of AAnimal called\n";
    this->_type = src._type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "Destructor of AAnimal called\n";
}

std::string AAnimal::getType() const
{
    return (this->_type);
}