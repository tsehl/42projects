/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:33:01 by thsehl            #+#    #+#             */
/*   Updated: 2023/07/28 11:50:13 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:

        WrongCat();
        WrongCat(WrongCat const &);
        WrongCat &operator=(WrongCat const&);
        ~WrongCat();

};

#endif