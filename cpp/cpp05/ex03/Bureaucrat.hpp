/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:13:52 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:13:53 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>
#include "Form.hpp"

class Bureaucrat {

	public:

		/* Constructors and destructor */
		Bureaucrat(void);
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);

		/* Assignment operator */
		Bureaucrat	&operator=(Bureaucrat const &rhs);

		/* Getters */
		unsigned int		getGrade() const;
		std::string const	&getName() const;

		/* Member functions */
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(Form &form) const;
		void	executeForm(Form const &form) const;

		/* Exceptions */
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:

		std::string const	_name;
		unsigned int		_grade;

};

/* Insertion operator */
std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i);

#endif
