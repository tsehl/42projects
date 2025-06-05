/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:35:52 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/20 16:35:54 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data	test;

	test.name = "coucou";

	std::cout << "name: " << test.name << std::endl;
	std::cout << "address: " << &test << std::endl;
	std::cout << "address: " << Serializer::deserialize(Serializer::serialize(&test)) << std::endl;

	uintptr_t	value = Serializer::serialize(&test);
	Data		*output = Serializer::deserialize(value);
	std::cout << "name: " << output->name << std::endl;
	std::cout << "address: " << output << std::endl;

	return (EXIT_SUCCESS);
}
