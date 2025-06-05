/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:14:15 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:14:16 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "Form.hpp"

class Intern {

	public:

		/* Constructors and destructor */
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		/* Assignment operator */
		Intern	&operator=(Intern const &rhs);

		/* Member functions */
		Form	*makeForm(std::string const &name, std::string const &target) const;

		/* Exceptions */
		class FormUnknownException : public std::exception {
			public:
				virtual const char *what() const throw();
		} ;

};

#endif
