/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:02:51 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/26 19:02:54 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char** av)
{
	if (ac != 2 || *av[1] == '\0')
	{
		std::cout << "Error" << std::endl;
		exit(EXIT_FAILURE);
	}
	try
	{
		RPN rpn(av[1]);
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
