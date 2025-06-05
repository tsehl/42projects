/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:33:39 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/29 17:06:47 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
    std::cout << "Default constructor of Cat called\n";
    _type = "cat";
    _brain = new Brain();
}

Cat::Cat(Cat const &src)
{
    std::cout << "Constructor copy of Cat called\n";
    this->_type = src._type;
    this->_brain = new Brain(*src._brain); 
}

Cat &Cat::operator=(Cat const &src)
{
    std::cout << "Affection operator of Cat called\n";
    this->_type = src._type;
    this->_brain = new Brain(*src._brain);
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor of Cat called\n";
    delete(this->_brain);
}

Brain* Cat::getBrain() const
{
    return (this->_brain);
}

void Cat::makeSound() const
{
    std::cout << "meow meow !\n";
}