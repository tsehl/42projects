/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:32:47 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/28 11:50:46 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    public:

        WrongAnimal();
        WrongAnimal(WrongAnimal const &);
        WrongAnimal &operator=(WrongAnimal const &);
        virtual ~WrongAnimal();
        
        std::string getType() const;
        
        void makeSound() const;
        
    protected:
        
        std::string _type;
};

#endif