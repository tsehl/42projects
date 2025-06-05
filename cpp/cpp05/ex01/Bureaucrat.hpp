/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:11:18 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:11:19 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <string>
# include "./Form.hpp"

class Form;

class Bureaucrat 
{
    public:

            Bureaucrat(void);
            ~Bureaucrat(void);
            Bureaucrat &operator=(Bureaucrat const &src);
            Bureaucrat(Bureaucrat const &src);
            Bureaucrat(std::string name, unsigned int grade);
            
            unsigned int getGrade( void ) const;
            const std::string getName ( void ) const;
            void    signForm(Form &form) const; 

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

        void incrementGrade();
        void decrementGrade();


    private : 
            
            const std::string _name;
            unsigned int _grade;

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &obj);

#endif
