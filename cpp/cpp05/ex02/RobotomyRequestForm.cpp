/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:12:51 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:12:52 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RobotomyRequestForm.hpp"

/* Constructors and destructor */

RobotomyRequestForm::RobotomyRequestForm(void) : Form()
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("Robotomy Request", 72, 45, target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src) {
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return ;
}

/* Assignment operator */

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	Form::operator=(rhs);
	return (*this);
}

/* Member functions */

void	RobotomyRequestForm::handle(Bureaucrat const &executor) const {
	this->Form::execute(executor);
	std::cout << "Tziiiing Tziiiing (drill noise can be heard in the background)" << std::endl;
	if (rand() % 2)
		std::cout << "\"" << this->Form::getTarget() << "\"" << " has been robotomized." << std::endl;
	else
		std::cout << "Robotomy failed!" << std::endl;
	return ;
}
