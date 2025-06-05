/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:10:42 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:10:43 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <string>

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
