/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:32:54 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/28 11:50:04 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Default constructor of WrongCat called\n";
    _type = "crocodile";
}

WrongCat::WrongCat(WrongCat const &src)
{
    std::cout << "Constructor Copy of WrongCat called\n";
    this->_type = src._type;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
    std::cout << "Affection operator of WrongCat called\n";
    this->_type = src._type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor of WrongCat called\n";
}