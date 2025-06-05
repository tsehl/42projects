/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:33:52 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/04 14:33:54 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public Animal
{
    public:

        Dog();
        Dog(Dog const &);
        Dog &operator=(Dog const &);
        ~Dog();
        
        Brain* getBrain() const;
        void makeSound() const;
    
    private:

        Brain* _brain;
};

#endif