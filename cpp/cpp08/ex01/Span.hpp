/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:42:32 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/26 15:42:34 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <stdexcept>
#include <vector>

class Span
{
	public:

		/* Constructors and destructor */
		Span(unsigned int N);
		Span(Span const &other);
		~Span();

		/* Assignment operator */
		Span &operator=(Span const &rhs);
		
		/* Member functions */
		void	addNumber(int nbr);
		void	addNumber(std::vector<int>::iterator const &start, std::vector<int>::iterator const &end);
		int		shortestSpan();
		int		longestSpan();

		/* Exception */
		class OutOfBoundariesException : public std::exception {
			public:
				virtual const char *what() const throw();
		} ;
		
		class NoSpanException : public std::exception {
			public:
				virtual const char *what() const throw();
		} ;

	private:

		unsigned int		_size;
		std::vector<int>	_vec;
		Span();

} ;

#endif
