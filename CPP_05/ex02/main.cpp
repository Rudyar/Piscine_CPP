/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:10:54 by arudy             #+#    #+#             */
/*   Updated: 2022/06/22 19:18:19 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	// {
	// 	std::cout << "---- Shrubbery form test ----" << std::endl;
	// 	ShrubberyCreationForm forest("Forest");
	// 	ShrubberyCreationForm garden("Garden");
	// 	ShrubberyCreationForm mountain("Mountain");
	// 	Bureaucrat a("Denis", 13);
	// 	Bureaucrat b("Gerard", 140);
	// 	Bureaucrat c;
	// 	try
	// 	{
	// 		a.executeForm(forest);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// 	try
	// 	{
	// 		a.signForm(forest);
	// 		a.executeForm(forest);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	try
	// 	{
	// 		b.signForm(garden);
	// 		b.executeForm(garden);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// 	std::cout << std::endl;
	// 	try
	// 	{
	// 		c.signForm(mountain);
	// 		c.executeForm(mountain);
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }
	{
		std::cout << "---- Robotomy Request form test ----" << std::endl;
		RobotomyRequestForm robot("Robot");
		RobotomyRequestForm robot1("Robot1");
		RobotomyRequestForm robot2("Robot2");
		Bureaucrat a("Denis", 13);
		Bureaucrat b("Gerard", 60);
		Bureaucrat c;
		try
		{
			a.executeForm(robot);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			a.signForm(robot);
			a.executeForm(robot);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			b.signForm(robot1);
			b.executeForm(robot1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			c.signForm(robot2);
			c.executeForm(robot2);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return 0;
}
