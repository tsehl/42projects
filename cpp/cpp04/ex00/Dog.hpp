/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:32:27 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/04 14:32:29 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "./Animal.hpp"

class Dog : public Animal
{
    public:

        Dog();
        Dog(Dog const &);
        Dog &operator=(Dog const &);
        ~Dog();
        
        void makeSound() const;
};

#endif