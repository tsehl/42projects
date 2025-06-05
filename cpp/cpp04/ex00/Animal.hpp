/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:32:07 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/04 14:32:10 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:

        Animal();
        Animal(Animal const &);
        Animal &operator=(Animal const &);
        virtual ~Animal();
        
        std::string getType() const;
        
        virtual void makeSound() const;
        
    protected:
        
        std::string _type;
};

#endif