/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:11:55 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:11:57 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

/* Constructors and destructor */

Bureaucrat::Bureaucrat(void) : _name("undefined"), _grade(150) {
	return ;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) :
_name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) :
_name(src._name),
_grade(src._grade)
{
	return ;
}

Bureaucrat::~Bureaucrat(void) {
	return ;
}

/* Assignment operator */

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs) {
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

/* Getters */

unsigned int	Bureaucrat::getGrade() const {
	return (this->_grade);
}

std::string const	&Bureaucrat::getName() const {
	return (this->_name);
}

/* Member functions */

void	Bureaucrat::incrementGrade() {

	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade() {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
	return ;
}

void	Bureaucrat::signForm(Form &form) const {
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << "\"" << form.getName() << "\"" << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << this->_name << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
	return ;
}

void	Bureaucrat::executeForm(Form const &form) const {
	try
	{
		form.handle(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " couldn’t execute " << form.getName() << " because " << e.what() << std::endl;
	}
	return ;
}

/* Exceptions */

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade specified is too high!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade specified is too low!");
}

/* Insertion operator */
std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i) {
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}
