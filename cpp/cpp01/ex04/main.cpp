/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsehl <thsehl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:57:03 by thsehl            #+#    #+#             */
/*   Updated: 2023/06/21 10:57:07 by thsehl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int count_line(char *name_file)
{
    std::ifstream ifs(name_file);
    if (!ifs)
    {
        std::cout << "the file can't be open\n";
        return (0);
    }
    int nb_lines = 0;
    std::string str = "";
    while (!ifs.eof())
    {
        getline(ifs, str);
        nb_lines++;
    }
    return (nb_lines);
}

int main(int ac, char **ar)
{
    if (ac != 4)
    {
        std::cout << "wrong number of arguments\n";
        return (0);    
    }
    std::ifstream ifs(ar[1]);
    if (!ifs)
    {
        std::cout << "the file can't be open\n";
        return (0);
    }
    int nb_lines = count_line(ar[1]);
    std::string str = "";
    std::string s1 = ar[2];
    std::string s2 = ar[3];
    size_t pos = 0;
    std::ofstream ofs(std::string(ar[1]).append(".replace"));
    if (!ofs)
    {
        std::cout << "the file can't be open\n";
        return (0);
    }
    int i = 0;
    while (!ifs.eof())
    {
        std::getline(ifs, str);
        while ((pos = str.find(s1)) != std::string::npos)
        {
            str.erase(pos, s1.length());
            str.insert(pos, s2);
        }
        i++;
        if (i == nb_lines)
            ofs << str;
        else
            ofs << str << std::endl;
    }
    ifs.close();
    ofs.close();
}