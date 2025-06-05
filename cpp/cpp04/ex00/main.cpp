/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:32:31 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/28 11:58:33 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongAnimal.hpp"
#include "./WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* k = new WrongAnimal();
    const WrongCat* l = new WrongCat();
    
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    std::cout << l->getType() << " " << std::endl;
    meta->makeSound();
    j->makeSound();
    i->makeSound();
    k->makeSound();
    l->makeSound();

    delete meta;
    delete j;
    delete i;
    delete k;
    delete l;

    return 0;
}