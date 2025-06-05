/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:13:10 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:13:11 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

/* Constructors and destructor */

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form()
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("Shrubbery Creation Form", 145, 137, target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src) {
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

/* Assignment operator */

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	Form::operator=(rhs);
	return (*this);
}

/* Member functions */

void	ShrubberyCreationForm::handle(Bureaucrat const &executor) const {
	this->Form::execute(executor);
	std::ofstream	ofs;
	ofs.open(this->getTarget() + "_shrubbery");
	if (ofs.is_open() == true)
	{
		ofs << "    /\\" << std::endl;
		ofs << "   /  \\" << std::endl;
		ofs << "   /~~\\o" << std::endl;
		ofs << "  /o   \\" << std::endl;
		ofs << " /~~*~~~\\" << std::endl;
		ofs << " o/    o \\" << std::endl;
		ofs << " /~~~~~~~~\\~" << std::endl; 
		ofs << "/__*_______\\" << std::endl; 
		ofs << "     ||" << std::endl; 
		ofs <<"   \\====/" << std::endl;
		ofs <<"    \\__/" << std::endl; 
	}
	else
		std::cerr << "Error opening file" << std::endl;
	ofs.close();
	return ;
}
