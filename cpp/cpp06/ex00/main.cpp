/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:19:12 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/24 16:19:13 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int argc, char** argv) 
{
    try
    {
    if(argc == 2)
        {
            ScalarConverter::convert(argv[1]);
        } 
        else 
            std::cout<<"Must be one argument"<<std::endl;
        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    
}