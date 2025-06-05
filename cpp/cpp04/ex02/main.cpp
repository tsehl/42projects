/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:34:46 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/29 17:13:21 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AAnimal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"

int main()
{
    //AAnimal test;
    
    Dog a;
    Dog b = a;

    a.getBrain()->ideas[0] = "an idea";

    std::cout << "a get "<< a.getBrain()->ideas[0] << std::endl;
    std::cout << "b get "<< b.getBrain()->ideas[0] << std::endl;
    AAnimal *animals[10];
    
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    
    for (int i = 0; i < 5; i++)
        animals[i]->getBrain()->ideas[i] = "hungry";
    
    for (int i = 5; i < 10; i++)
        animals[i]->getBrain()->ideas[i] = "sleepy";

    for (int i = 0; i < 5; i++) 
        std::cout << "Dogs ideas: " << animals[i]->getBrain()->ideas[i] << std::endl;   
    
    for (int i = 5; i < 10; i++) 
        std::cout << "Cats ideas: " << animals[i]->getBrain()->ideas[i] << std::endl;

    for (int i = 0; i < 10; i++)
        delete (animals[i]);
    return 0;
}