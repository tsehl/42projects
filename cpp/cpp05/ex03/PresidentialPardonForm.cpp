/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:14:28 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:14:29 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

/* Constructors and destructor */

PresidentialPardonForm::PresidentialPardonForm(void) : Form()
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("Presidential Pardon", 25, 5, target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src) {
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	return ;
}

/* Assignment operator */

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	Form::operator=(rhs);
	return (*this);
}

/* Member functions */

void	PresidentialPardonForm::handle(Bureaucrat const &executor) const {
	this->Form::execute(executor);
	std::cout << "\"" << this->Form::getTarget() << "\"" << " was pardoned by Zaphod Beeblebrox." << std::endl;
	return ;
}
