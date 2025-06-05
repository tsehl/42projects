/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:03:07 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/26 19:03:09 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

# include <iostream>
# include <string>
# include <stack>

class RPN
{
	public:
		RPN(std::string const&);
		~RPN(void);

	private:
		RPN(void);
		RPN(RPN const&);
		RPN&	operator=(RPN const&);
		
		void	_compute(std::string const&);
		void	_doOp(char c);

		std::stack<int>	_stack;
};

#endif
