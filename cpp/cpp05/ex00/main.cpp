/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolescar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:10:58 by dolescar          #+#    #+#             */
/*   Updated: 2023/10/09 15:10:59 by dolescar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

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
        Bureaucrat bureaucrat("Buro6", 5);
        std::cout << bureaucrat;
        std::cout << "Increment grade" << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        std::cout << "decrement grade" << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat;
        std::cout << "Increment grade" << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        std::cout << "Increment grade" << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        std::cout << "Increment grade" << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        std::cout << "Increment grade" << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        std::cout << "Increment grade" << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }
}
