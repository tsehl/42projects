/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:32:12 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/04 14:32:15 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
    std::cout << "Default constructor of Cat called\n";
    _type = "cat";
}

Cat::Cat(Cat const &src)
{
    std::cout << "Constructor copy of Cat called\n";
    this->_type = src._type;
}

Cat &Cat::operator=(Cat const &src)
{
    std::cout << "Affection operator of Cat called\n";
    this->_type = src._type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Destructor of Cat called\n";
}

void Cat::makeSound() const
{
    std::cout << "meow meow !\n";
}