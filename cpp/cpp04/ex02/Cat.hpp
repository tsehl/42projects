/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:34:35 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/04 14:34:37 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "./AAnimal.hpp"
#include "./Brain.hpp"

class Cat : public AAnimal
{
    public:

        Cat();
        Cat(Cat const &);
        Cat &operator=(Cat const&);
        ~Cat();

        AAnimal	&operator=(const AAnimal &src);
        Brain* getBrain() const;
        void makeSound() const;

    private:

        Brain* _brain;

};

#endif