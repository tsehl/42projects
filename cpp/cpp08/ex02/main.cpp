/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:42:37 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/26 15:42:39 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <list>
#include "MutantStack.hpp"

void	print(int x)
{
	std::cout << x << std::endl;
}

int	main(void)
{
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << "top element: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);
	}
	std::cout << "---------------------------------------------------" << std::endl;
	{
		std::list<int>	mlist;

		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << "top element: " << mlist.back() << std::endl;
		mlist.pop_back();
		std::cout << "size: " << mlist.size() << std::endl;
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		mlist.push_back(0);

		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << "---------------------------------------------------" << std::endl;
	{
		MutantStack<std::string>	mstack;

		mstack.push("ca va");
		mstack.push("coucou");
		std::cout << "top element: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size: " << mstack.size() << std::endl;
		mstack.push("?");
		mstack.push("Oui, merci bien");

		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	return (0);
}
