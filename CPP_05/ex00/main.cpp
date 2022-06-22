/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:10:54 by arudy             #+#    #+#             */
/*   Updated: 2022/06/22 15:45:58 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "---- Too High test ----" << std::endl;
	try
	{
		Bureaucrat test("Gerard", 151);
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---- Too Low test ----" << std::endl;
	try
	{
		Bureaucrat test("Gerard", 0);
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---- Ok test ----" << std::endl;
	try
	{
		Bureaucrat test("Gerard", 12);
		Bureaucrat test1;
		std::cout << test;
		std::cout << test1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---- Increment too low grade ----" << std::endl;
	try
	{
		Bureaucrat test("Gerard", 1);
		test.incrementGrade();
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---- Increment too high grade ----" << std::endl;
	try
	{
		Bureaucrat test("Gerard", 150);
		test.decrementGrade();
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---- Increment & decrement grade ----" << std::endl;
	try
	{
		Bureaucrat test("Gerard", 150);
		Bureaucrat test1("Denis", 1);
		test.incrementGrade();
		test1.decrementGrade();
		std::cout << test;
		std::cout << test1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

