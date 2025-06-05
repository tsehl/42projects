/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:51:13 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/14 16:51:15 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <iostream>

class Contact 
{
    public:

        Contact(void);
        ~Contact(void);

        void set_first_name(std::string);
        std::string get_first_name(void);
        void set_last_name(std::string);
        std::string get_last_name(void);
        void set_nickname(std::string);
        std::string get_nickname(void);
        void set_phone_number(std::string);
        std::string get_phone_number(void); 
        void set_darkest_secret(std::string);
        std::string get_darkest_secret(void);

    private:

        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

#endif