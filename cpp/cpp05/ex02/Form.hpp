/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:12:14 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:12:15 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <stdexcept>

class Bureaucrat;

class Form {

	public:

		/* Constructors and destructor */
		Form(void);
		Form(std::string const &name, unsigned int const gradeSign, unsigned int const gradeExec);
		Form(std::string const &name, unsigned int const gradeSign, unsigned int const gradeExec, std::string const &target);
		Form(Form const &src);
		virtual ~Form(void);

		/* Assignment operator */
		Form &operator=(Form const &rhs);

		/* Getters */
		std::string const	&getName() const;
		std::string const	&getTarget() const;
		unsigned int		getGradeSign() const;
		unsigned int		getGradeExecute() const;
		bool				getStatus() const;

		/* Member functions */
		void			beSigned(Bureaucrat const &other);
		void			execute(Bureaucrat const & executor) const;
		virtual void	handle(Bureaucrat const &executor) const = 0;

		/* Exceptions */
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		} ;
		
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		} ;

		class FormSignedAlreadyException : public std::exception {
			public:
				virtual const char *what() const throw();
		} ;

		class FormNotSignedException : public std::exception {
			public:
				virtual const char *what() const throw();
		} ;
		
	private:

		std::string const	_name;
		std::string	const	_target;
		bool				_signed;
		unsigned int const	_gradeSign;
		unsigned int const	_gradeExecute;

} ;

/* Insertion operator */
std::ostream	&operator<<(std::ostream &o, Form const &i);

#endif
