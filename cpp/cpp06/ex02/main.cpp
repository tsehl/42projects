/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:37:07 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/20 16:37:09 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base	*generate(void) {
	Base	*res;

	switch(rand() % 3) {
		case 0:
			res = new A();
			break ;
		case 1:
			res = new B();
			break ;
		case 2:
			res = new C();
			break ;
		default:
			return (NULL);
	}
	return (res);
}

void	identify(Base* p) {
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
			std::cout << "Impossible cast" << std::endl;
	return ;
}

void	identify(Base& p) {
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {
		;
	}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e) {
		;
	}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e) {
		;
	}
	return ;
}

int	main(void)
{
	/* initialize random seed: */
	srand(time(NULL));

	Base	*ptr0 = generate();
	Base	*ptr1 = generate();
	Base	&ref = *ptr1;
	identify(ptr0);
	identify(ref);

	delete(ptr0);
	delete(ptr1);

	return (EXIT_SUCCESS);
}
