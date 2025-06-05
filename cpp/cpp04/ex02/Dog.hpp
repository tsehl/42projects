/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:34:51 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/04 14:34:53 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "./AAnimal.hpp"
#include "./Brain.hpp"

class Dog : public AAnimal
{
    public:

        Dog();
        Dog(Dog const &);
        Dog &operator=(Dog const &);
        ~Dog();
        
        AAnimal	&operator=(const AAnimal &src);
        Brain* getBrain() const;
        void makeSound() const;
    
    private:

        Brain* _brain;
};

#endif