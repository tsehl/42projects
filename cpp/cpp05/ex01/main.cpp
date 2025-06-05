/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:11:44 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:11:47 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./Form.hpp"

int main()
{
    try 
    {
        Bureaucrat bureaucrat("Buro", 85);
        std::cout << bureaucrat;
        std::cout << "Increment grade" << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        std::cout << "decrement grade" << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat;
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try 
    {
        Bureaucrat bureaucrat("Buro2", 850);
        std::cout << bureaucrat;
        std::cout << "Increment grade" << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        std::cout << "decrement grade" << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat;
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try 
    {
        Bureaucrat bureaucrat("Buro3", 0);
        std::cout << bureaucrat;
        std::cout << "Increment grade" << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        std::cout << "decrement grade" << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat;
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try 
    {
        Bureaucrat bureaucrat("Buro4", 150);
        std::cout << bureaucrat;
        std::cout << "decrement grade" << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat;
        std::cout << "Increment grade" << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }
     try 
    {
        Bureaucrat bureaucrat("Buro5", 1);
        std::cout << bureaucrat;
        std::cout << "Increment grade" << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        std::cout << "decrement grade" << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat;
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bureaucrat1("Buro1", 1);
        std::cout << bureaucrat1;
        Bureaucrat bureaucrat2("Buro2", 100);
        std::cout << bureaucrat2;
        Form form1("form1", 50, 50, false);
        std::cout << form1;
        Form form2("form2", 120, 120, false);
        std::cout << form2;
        std::cout << bureaucrat1;
        bureaucrat1.signForm(form1);
        bureaucrat1.signForm(form1);
        bureaucrat2.signForm(form1);
        bureaucrat2.signForm(form2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Form form("form1", 250, 50, false);
        std::cout << form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Form form("form1", 0, 50, false);
        std::cout << form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Form form("form1", 20, 50, true);
        std::cout << form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
