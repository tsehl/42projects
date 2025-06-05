/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:14:32 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:14:33 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {

	public:

		/* Constructors and destructor */
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm(void);

		/* Assignment operator */
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);

		/* Member functions */
		void	handle(Bureaucrat const &executor) const;

	private:

		PresidentialPardonForm(void);

} ;

#endif
