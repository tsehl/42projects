/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:59:48 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/24 19:21:09 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
	try 
	{
		int size = 5;
		srand(time(NULL));
		
		Array<int> numbers(size);
		for (int i = 0; i < 5; i++)
		{
			const int value = rand();
			numbers[i] = value;
		}
		Array<int> tmp = numbers;
		for (int i = 0; i < 5; i++)
		{
			std::cout << i << ": [" << numbers[i] << "]" << std::endl;
			std::cout << i << ": [" << tmp[i] << "]" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
