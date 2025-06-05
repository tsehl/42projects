/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:51:30 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/14 16:51:33 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "./Contact.class.hpp"

class Phonebook
{
    public:
        
        int nb_contact;
        int index;

        Phonebook(void);
        ~Phonebook(void);
        
        void add();
        void search();
        void display();
        std::string add_point(std::string);
        int is_str_digit(std::string);
        
    
        
    private:

        Contact contact[8];
    
     
};

#endif