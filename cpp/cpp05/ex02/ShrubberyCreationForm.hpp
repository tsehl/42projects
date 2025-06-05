/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:13:17 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:13:18 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {

	public:

		/* Constructors and destructor */
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm(void);

		/* Assignment operator */
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);

		/* Member functions */
		void	handle(Bureaucrat const &executor) const;

	private:

		ShrubberyCreationForm(void);

} ;

#endif
