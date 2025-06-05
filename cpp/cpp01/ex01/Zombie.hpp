/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:15:05 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/16 15:15:07 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie 
{
    public: 

            Zombie();
            ~Zombie(void);

            std::string get_name(void);
            void set_name(std::string);

            void announce(void); 
    
    private:

            std::string name;
    
};

Zombie* zombieHorde(int, std::string);

#endif