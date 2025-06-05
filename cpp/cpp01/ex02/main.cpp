/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:15:15 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/16 15:15:19 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory address: " << &str << std::endl;
    std::cout << "Memory address: " << stringPTR << std::endl;
    std::cout << "Memory address: " << &stringREF << std::endl;

    std::cout << "Value of string: " << str << std::endl;
    std::cout << "Value of string: " << *stringPTR << std::endl;
    std::cout << "Value of string: " << stringREF << std::endl;
}