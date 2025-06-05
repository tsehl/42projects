/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:11:12 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:11:13 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Undefine"), _grade(150)
{
    return;
}

Bureaucrat::~Bureaucrat(void) 
{
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name), _grade(src._grade)
{
    return;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
    if (this != &src)
        this -> _grade = src._grade;
    return (*this); 
}

unsigned int Bureaucrat::getGrade( void ) const
{
    return(this -> _grade);
}

const std::string Bureaucrat::getName ( void ) const
{
    return(this -> _name);
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else 
        this -> _grade = grade;
    return;
}

void Bureaucrat::incrementGrade( void )
{
    if (this -> _grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this -> _grade--;
}

void Bureaucrat::decrementGrade( void )
{
    if (this -> _grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this -> _grade++;
}

void    Bureaucrat::signForm(Form &form) const 
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception const &e)
    {
        std::cout << this->_name << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
    }
    return ;
}


std::ostream &operator<<(std::ostream &o, Bureaucrat const &obj)
{
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return (o);
}
