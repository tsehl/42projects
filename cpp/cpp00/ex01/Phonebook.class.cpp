/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:51:24 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/20 12:01:36 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include "./Phonebook.class.hpp"


Phonebook::Phonebook(void)
{   
    this->index = 0;
}

Phonebook::~Phonebook(void)
{
}

int Phonebook::is_str_digit(std::string str)
{
    int i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

void Phonebook::add(void)
{
    std::string first_name = "";
    std::string last_name = "";
    std::string nickname = "";
    std::string phone_number = "";
    std::string darkest_secret = "";
    
    if (this->nb_contact < 8)
            this->nb_contact++;
    if (this->index == 8)
        this->index = 0;
    std::cout << "\nFirst name: \n\n";
    while (first_name.empty())
        getline(std::cin, first_name);
    this->contact[this->index].set_first_name(first_name);
    std::cout << "\nLast name: \n\n";
    while (last_name.empty())
        getline(std::cin, last_name);
    this->contact[this->index].set_last_name(last_name);
    std::cout << "\nNickname: \n\n";
    while (nickname.empty())
        getline(std::cin, nickname);
    this->contact[this->index].set_nickname(nickname);
    std::cout << "\nPhone number: \n\n";
    while (phone_number.empty() || !is_str_digit(phone_number))
    {
        getline(std::cin, phone_number);
        if (!is_str_digit(phone_number))
            std::cout << "\nWrong number, type again\n\n";
    }
    this->contact[this->index].set_phone_number(phone_number);
    std::cout << "\nDarkest secret: \n\n";
    while (darkest_secret.empty())
        getline(std::cin, darkest_secret);
    this->contact[this->index].set_darkest_secret(darkest_secret);
    this->index++;
    std::cout << "\nContact saved, What you want to do next ?\n\n";

}

std::string Phonebook::add_point(std::string str)
{
    std::string s;

    if (str.size() > 10)
    {
        str[9] = '.';
        str[10] = '\0';
    }        
    s = str.substr(0, 10);
    return (s);
}

void Phonebook::display(void)
{ 
    std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|" << std::right << std::setw(10) << "Index";
	std::cout << "|" << std::right << std::setw(10) << "First name";
	std::cout << "|" << std::right << std::setw(10) << "Last name";
	std::cout << "|" << std::right << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    
    for (int i = 0; i < this->nb_contact; i++)
    {
        std::cout << "|" << std::right << std::setw(10) << i + 1;
        std::cout << "|" << std::right << std::setw(10) << this->add_point(this->contact[i].get_first_name());
        std::cout << "|" << std::right << std::setw(10) << this->add_point(this->contact[i].get_last_name());
        std::cout << "|" << std::right << std::setw(10) << this->add_point(this->contact[i].get_nickname()) << "|" << std::endl;   
    }
    std::cout << "|----------|----------|----------|----------|\n";
}

void Phonebook::search(void)
{
    this->display();
    std::string input;
    if (this->nb_contact == 0)
    {
        std::cout << std::endl << "Phonebook empty\n";
        return;
    }
    std::cout << std::endl << "Type the index 1-8\n";
    std::cin >> input;
    while (!(std::isdigit(input[0])) || input.size() > 1 || (std::stoi(input) < 1 || std::stoi(input) > this->nb_contact))
    {
        std::cout << "wrong index type again\n";
        std::cin >> input;
    }
    std::cout << "\nFirst name: " << this->contact[std::stoi(input) - 1].get_first_name() << std::endl << std::endl;
    std::cout << "Last name: " << this->contact[std::stoi(input) - 1].get_last_name() << std::endl << std::endl;
    std::cout << "Nickname: " << this->contact[std::stoi(input) - 1].get_nickname() << std::endl << std::endl;
    std::cout << "Phone number: " << this->contact[std::stoi(input) - 1].get_phone_number() << std::endl << std::endl;
    std::cout << "Darkest secret: " << this->contact[std::stoi(input) - 1].get_darkest_secret() << std::endl << std::endl;
    std::cout << "What you want to do next ?\n\n";
    std:: cout << std::endl << std::endl;
}