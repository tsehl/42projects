/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:11:30 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:11:31 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "./Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
            Form(void);
            ~Form(void);
            Form &operator=(Form const &src);
            Form(Form const &src);
            Form(const std::string name, unsigned int gradeExec, unsigned int gradeSign, bool sign);

            unsigned int getGradeExec() const;
            unsigned int getGradeSign() const;
            const std::string getName() const;
            bool getSigned() const;
            void beSigned(const Bureaucrat &bureaucrat);


            class GradeTooHighException : public std::exception
            {
            public :
                    virtual const char* what() const throw()
                    {
                            return ("The grade is too high");
                    }
            };

            class GradeTooLowException : public std::exception
            {
            public :
                    virtual const char* what() const throw()
                    {
                            return ("The grade is too low");
                    }
            };

            class FormAlreadySignedException : public std::exception
            {
            public :
                    virtual const char* what() const throw()
                    {
                            return ("Form already sign");
                    }
            };



    private:
            unsigned int  _gradeExec;
            unsigned int  _gradeSign;
            const std::string   _name;
            bool                _signed;
};

std::ostream &operator<<(std::ostream &o, Form const &obj);


#endif
