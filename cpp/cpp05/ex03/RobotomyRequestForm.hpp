/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:14:47 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:14:48 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {

	public:

		/* Constructors and destructor */
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm(void);

		/* Assignment operator */
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);

		/* Member functions */
		void	handle(Bureaucrat const &executor) const;

	private:

		RobotomyRequestForm(void);

} ;

#endif
