/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:15:10 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:15:12 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	std::cout << "-----Instantiation-----\n" << std::endl;
	Bureaucrat	bureaucrat1("John", 6);
	Intern		someRandomIntern;
	Form		*someForm;

	try {
		someForm = someRandomIntern.makeForm("Presidential Pardon", "your mama");
		bureaucrat1.signForm(*someForm);
		bureaucrat1.executeForm(*someForm);
		
		someForm = someRandomIntern.makeForm("Robotomy Request", "your mama");
		bureaucrat1.signForm(*someForm);
		bureaucrat1.executeForm(*someForm);
		
		someForm = someRandomIntern.makeForm("Shrubbery Creation Form", "your mama");
		bureaucrat1.signForm(*someForm);
		bureaucrat1.executeForm(*someForm);

		/* Not allowd */
		// someForm = someRandomIntern.makeForm("coucou", "your mama");
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	return (0);
}
