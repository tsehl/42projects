/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:33:14 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/04 14:33:16 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "./Brain.hpp"

class Animal
{
    public:

        Animal();
        Animal(Animal const &);
        virtual Animal &operator=(Animal const &);
        virtual ~Animal();
        
        std::string getType() const;
        
        virtual void makeSound() const;
        virtual Brain*	getBrain() const = 0;
        
        
    protected:
        
        std::string _type;
};

#endif