/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:05:48 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/27 13:05:50 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap
{
     public:
    
        FragTrap();
        FragTrap(std::string);
        FragTrap(FragTrap const &);
        FragTrap& operator=(FragTrap const &);
        ~FragTrap();

        void highFivesGuys(void);

};

#endif