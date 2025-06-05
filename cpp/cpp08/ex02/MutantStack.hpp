/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:42:51 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/26 15:43:07 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

		/* Iterators */
		typedef typename MutantStack::stack::container_type::iterator			iterator;
		typedef typename MutantStack::stack::container_type::reverse_iterator reverse_iterator;
		
		/* Constructors and destructor */
		MutantStack() : std::stack<T>() {}
		MutantStack(MutantStack const &other) : std::stack<T>(other) {}
		virtual ~MutantStack() {}

		/* Assignment operator */
		MutantStack &operator=(MutantStack const &rhs)
		{
			if (this != &rhs)
				this->operator=(rhs);
			return (*this);
		}
		
		/* Member functions */
		iterator			begin() { return this->c.begin(); }
		iterator			end() { return this->c.end(); }
		reverse_iterator	rbegin() { return this->c.rbegin(); }
		reverse_iterator	rend() { return this->c.rend(); }

} ;

#endif
