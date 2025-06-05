/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:20:48 by thsehl            #+#    #+#             */
/*   Updated: 2023/10/24 16:20:59 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string ScalarConverter::primary;
char *  ScalarConverter::str1;
double ScalarConverter::d;
char * ScalarConverter::second;


ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& t)
{
    (void)t;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& t)
{
    (void)t;
    return (*this);
}

void ScalarConverter::convert(char * str)
 {
    str1 = str;
    primary = str;
    d = strtod(str1, &second);
    if (specialValues() == 1 || isChar() == 1 || isInt() == 1
        || isFloat() == 1 || isDouble() == 1){
        return ;
    } 
    else throw OtherCase();
}

int ScalarConverter::specialValues()
{
    if(primary == "nan" || primary == "nanf")
    {
        std::cout<<"char: impossible"<<std::endl;
        std::cout<<"int: impossible"<<std::endl;
        std::cout<<"float: nanf"<<std::endl;
        std::cout<<"double: nan"<<std::endl;
        return (1);
    } 
     else if(primary == "inf" || primary == "inff")
    {
        std::cout<<"char: impossible"<<std::endl;
        std::cout<<"int: impossible"<<std::endl;
        std::cout<<"float: inff"<<std::endl;
        std::cout<<"double: inf"<<std::endl;
           return (1);
    }
      else if(primary == "-inf" || primary == "-inff")
    {
        std::cout<<"char: impossible"<<std::endl;
        std::cout<<"int: impossible"<<std::endl;
        std::cout<<"float: -inff"<<std::endl;
        std::cout<<"double: -inf"<<std::endl;
           return (1);
    }
      else if(primary == "+inf" || primary == "+inff")
    {
        std::cout<<"char: impossible"<<std::endl;
        std::cout<<"int: impossible"<<std::endl;
        std::cout<<"float: +inff"<<std::endl;
        std::cout<<"double: +inf"<<std::endl;
           return (1);
    }
       return (0);
}
int ScalarConverter::isChar(){
    if(primary.length() == 1)
    {
        int c = static_cast<int>(primary[0]);
        if ((primary[0] >= 32 && primary[0] <= 47) || (primary[0] >= 57 && primary[0] <= 126 ))
        {
            std::cout<<"char: '"<<primary[0]<<"'"<<std::endl;
            std::cout<<"int: "<<c<<std::endl;
            std::cout<<"float: "<<c<<".0f"<<std::endl;
            std::cout<<"double: "<<c<<".0"<<std::endl;
            return (1);
        }
    }
    return (0);
}

int ScalarConverter::isInt(){
    int len = primary.length();
    int j = 0;
    if(primary[j]=='-' || primary[j]=='+')
        j++;
    for(int i = j; i<len; i++)
    {
        if(isdigit(primary[i])==0)
            return (0);
    }
    int a = static_cast<int>(d);
    if(a < -2147483647  || a > 2147483647)
        return (0);
    if(a >=32 && a<=127)
        std::cout<<"char: '"<<static_cast<char>(a)<<"'"<<std::endl;
    else 
        std::cout<<"char: "<<"Non displayable."<<std::endl;
        std::cout<<"int: "<<a<<std::endl;
        std::cout<<"float: "<<a<<".0f"<<std::endl;
        std::cout<<"double: "<<a<<".0"<<std::endl;
    return (1);
}

int ScalarConverter::isFloat(){
    int len = primary.length();
    int j = 0;
    int flag = 0;
    if(primary[j]=='-' || primary[j]=='+')
        j++;
    for(int i = j; i<len-1; i++)
    {
        if((isdigit(primary[i])==0 && primary[i]!='.') || (primary[i]=='.'  && flag == 1))
            return (0);
        if (primary[i] == '.')
            flag=1;
    }
    if(primary[len-1]!='f' || (primary[len-1] =='f' && primary[len-2] =='.' ))
        return (0);
    int a = static_cast<int>(d);
    if(a < -2147483647  || a > 2147483647)
        return (0);
    if(a >=32 && a<=127)
        std::cout<<"char: '"<<static_cast<char>(a)<<"'"<<std::endl;
    else 
        std::cout<<"char: "<<"Non displayable."<<std::endl;
        std::cout<<"int: "<<a<<std::endl;
        std::cout<<"float: "<<primary<<std::endl;
        std::cout<<"double: "<<primary.substr(0, len-1)<<std::endl;
    return (1);
}


int ScalarConverter::isDouble(){
    int len = primary.length();
    int j = 0;
    int flag = 0;
    if(primary[j]=='-' || primary[j]=='+')
        j++;
    for(int i = j; i<len; i++)
    {
        if((isdigit(primary[i])==0 && primary[i]!='.') || (primary[i]=='.'  && flag == 1))
            return (0);
        if (primary[i] == '.')
            flag=1;
    }
    int a = static_cast<int>(d);
    if(a < -2147483647  || a > 2147483647)
        return (0);
    if(a >=32 && a<=127)
        std::cout<<"char: '"<<static_cast<char>(a)<<"'"<<std::endl;
    else 
        std::cout<<"char: "<<"Non displayable."<<std::endl;
        std::cout<<"int: "<<a<<std::endl;
        std::cout<<"float: "<<primary<<"f"<<std::endl;
        std::cout<<"double: "<<primary<<std::endl;
    return (1);
}


const char * ScalarConverter::OtherCase::what () const throw()
{
    return "Exception: Invalid input";
}
