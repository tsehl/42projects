/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:33:44 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/04 14:33:46 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal
{
    public:

        Cat();
        Cat(Cat const &);
        Cat &operator=(Cat const&);
        ~Cat();

        Brain* getBrain() const;
        void makeSound() const;

    private:

        Brain* _brain;

};

#endif