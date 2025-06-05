/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:32:18 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/04 14:32:20 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "./Animal.hpp"

class Cat : public Animal
{
    public:

        Cat();
        Cat(Cat const &);
        Cat &operator=(Cat const&);
        ~Cat();

        void makeSound() const;

};

#endif