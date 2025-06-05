/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:34:39 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/29 17:08:28 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog()
{
    std::cout << "Default constructor of Dog called\n";
    _type = "dog";
    _brain = new Brain();
}

Dog::Dog(Dog const &src)
{
    std::cout << "Constructor copy of Dog called\n";
    this->_type = src._type;
    this->_brain = new Brain(*src._brain);     
}

Dog &Dog::operator=(Dog const &src)
{
    std::cout << "Affection operator of Dog called\n";
    this->_type = src._type;
    this->_brain = new Brain(*src._brain);
    return (*this);
}

AAnimal	&Dog::operator=(const AAnimal &src)
{
	this->_type = src.getType();
	*(this->_brain) = *(src.getBrain());
	return (*this);
}


Dog::~Dog()
{
    std::cout << "Destructor of Dog called\n";
    delete(this->_brain);
}

Brain* Dog::getBrain() const
{
    return (this->_brain);
}

void Dog::makeSound() const
{
    std::cout << "bark bark !\n";
}