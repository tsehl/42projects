/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:57:30 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/21 10:57:33 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int main()
{
    Harl harl;
   

    std::cout << "DEBUG: ";
    harl.complain("DEBUG");
	std::cout << "ERROR: ";
	harl.complain("ERROR");
	std::cout << "WARNING: ";
	harl.complain("WARNING");
	std::cout << "INFO: ";
	harl.complain("INFO");
}