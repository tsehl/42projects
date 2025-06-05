/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:20:53 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/24 16:21:04 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <stdlib.h> 
#include<math.h>

class ScalarConverter
{
    public:
      static void convert(char *);
      static int isChar();
      static int isInt();
      static int specialValues();
      static int isFloat();
      static int isDouble();
    private:
        static std::string primary;
        static double d;
        static char *  str1;
        static char * second;
        ScalarConverter();
        ScalarConverter(const ScalarConverter& );
        ScalarConverter& operator=(const ScalarConverter& );
        ~ScalarConverter();

      class OtherCase : public std::exception
      {
        public:
            const char * what () const throw();
      };
};

#endif