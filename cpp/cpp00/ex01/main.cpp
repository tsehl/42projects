/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:51:18 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/14 16:51:20 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Phonebook.class.hpp"
#include "./Contact.class.hpp"

int main()
{
    Phonebook phonebook;
    std::string input = "";

    std::cout << "Your Phonebook\n\n";
    std::cout << "-------------------\n\n";
    std::cout << "Hello ! What you want to do ?\n\n\n";
    std::cout << "Type ADD, SEARCH or EXIT\n\n";    
    phonebook.nb_contact = 0;
    while(input.compare("EXIT"))
    {
        std::cin >> input;
        if (!(input.compare("ADD")))
            phonebook.add();
        else if (!(input.compare("SEARCH")))
            phonebook.search();
        else if (input.compare("EXIT"))
        {
            std::cout << "\nYou can't do that !\n\n";
            std::cout << "What you want to do next ?\n\n";
        }
    }
}