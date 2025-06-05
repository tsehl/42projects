/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:14:10 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:14:11 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/* Constructors and destructor */

Intern::Intern(void) {
	return ;
}

Intern::Intern(Intern const &src) {
	(void)src;
	return ;
}

Intern::~Intern(void) {
	return ;
}

/* Assignment operator */

Intern	&Intern::operator=(Intern const &rhs) {
	(void)rhs;
	return (*this);
}

/* Member functions */

Form	*Intern::makeForm(std::string const &name, std::string const &target) const {
	enum Forms
	{
		presidentialPardonForm,
		robotomyRequestForm,
		shrubberyCreationForm
	};
	std::string	form_names[3] = {
		"Presidential Pardon",
		"Robotomy Request",
		"Shrubbery Creation Form"
		};
	int i;
	for (i = 0; i < 3; i++)
	{
		if (name == form_names[i])
			break ;
	}
	Form	*form;
	switch (i) {
		case presidentialPardonForm:
			form = new PresidentialPardonForm(target);
			break ;
		case robotomyRequestForm:
			form = new RobotomyRequestForm(target);
			break ;
		case shrubberyCreationForm:
			form = new ShrubberyCreationForm(target);
			break ;
		default:
			throw Intern::FormUnknownException();
	}
	std::cout << "Intern creates " << name << std::endl;
	return (form);
}

/* Exceptions */

const char	*Intern::FormUnknownException::what() const throw() {
	return ("Intern could not create form!");
}
