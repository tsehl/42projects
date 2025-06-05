/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:59:30 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/24 17:59:33 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Iter.hpp"

void	print(const int& x)
{
	std::cout << x << std::endl;
}

void	add(int &x)
{
	x = x + 1;
}

#include <stdlib.h>
int	main(void)
{
	int	arr[12];

	for (size_t i = 0; i < 12; i++)
		arr[i] = i;
	std::cout << arr[0] << std::endl;
	::iter(arr, 12, add);
	std::cout << arr[0] << std::endl;
	::iter(arr, 12, multiply<int>);
	std::cout << arr[0] << std::endl;
	::iter(arr, 12, multiply<int>);
	std::cout << arr[0] << std::endl;
	::iter(arr, 12, add);
	std::cout << arr[0] << std::endl;
	
	std::cout << "-----Printing-----" << std::endl;
	::iter(arr, 12, print);

	return (0);
}
