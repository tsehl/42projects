/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:57:18 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/21 10:57:21 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!\n";
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
    std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void	(Harl::*f[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error };
	int i = -1;
	while (++i < 4)
	{
		if (!levels[i].compare(level))
			(this->*f[i])();
	}
        
}