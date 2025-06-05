/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:34:11 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/04 14:34:13 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "./Brain.hpp"

class AAnimal
{
    public:

        AAnimal();
        AAnimal(AAnimal const &);
        virtual AAnimal &operator=(AAnimal const &) = 0;
        virtual ~AAnimal() = 0;
        
        std::string getType() const;
        
        virtual void makeSound() const = 0;
        virtual Brain*	getBrain() const = 0;
        
    protected:
        
        std::string _type;
};

#endif