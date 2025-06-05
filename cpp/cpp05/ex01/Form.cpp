/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:11:24 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:11:25 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"

Form::Form(void) : _gradeExec(1), _gradeSign(1), _name("Undefine"), _signed(false)
{
    return;
}

Form::~Form(void) 
{
    return;
}

Form::Form(Form const &src) :  _gradeExec(src._gradeExec), _gradeSign(src._gradeSign), _name(src._name), _signed(src._signed)
{
    return;
}

Form &Form::operator=(Form const &src)
{
    if (this != &src)
        this -> _signed = src._signed;
    return (*this); 
}

Form::Form(const std::string name, unsigned int gradeExec, unsigned int gradeSign, bool sign) : _name(name)
{
    if (gradeExec > 150)
        throw Form::GradeTooLowException();
    else if (gradeExec < 1)
        throw Form::GradeTooHighException();
    else 
        this -> _gradeExec = gradeExec;
    if (gradeSign > 150)
        throw Form::GradeTooLowException();
    else if (gradeSign < 1)
        throw Form::GradeTooHighException();
    else 
        this -> _gradeSign = gradeSign;
    if (sign == true)
        throw Form::FormAlreadySignedException();
    else
        this -> _signed = sign;
    return;
}

unsigned int Form::getGradeExec() const
{
    return(this -> _gradeExec);
}

unsigned int Form::getGradeSign() const
{
    return(this -> _gradeSign);
}

const std::string Form::getName () const
{
    return(this -> _name);
}

bool Form::getSigned () const
{
    return (this -> _signed);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
 
    if (bureaucrat.getGrade() > this -> _gradeSign)
        throw Form::GradeTooLowException();
    if (this -> _signed == true)
        throw Form::FormAlreadySignedException();
    this -> _signed = true;

}
    


std::ostream &operator<<(std::ostream &o, Form const &obj)
{
    o << obj.getName() << " : signature grade " << obj.getGradeSign()  << ", exec grade " << obj.getGradeExec()  << ", already signed " << obj.getSigned() << std::endl;
    return (o);
}

