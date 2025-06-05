/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:33:33 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/04 14:33:35 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:

        Brain();
        Brain(Brain const&);
        Brain &operator=(Brain const&);
        ~Brain();
    
        std::string ideas[100];
};

#endif