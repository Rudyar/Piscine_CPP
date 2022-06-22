/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:10:54 by arudy             #+#    #+#             */
/*   Updated: 2022/06/22 11:18:41 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "---- Init test ----" << std::endl;
	{
		Bureaucrat test("Denis", 1);
		Bureaucrat test2("Gerard", 150);
		Bureaucrat test3;
		std::cout << test;
		std::cout << test2;
		std::cout << test3;
	}

	std::cout << std::endl << "---- Increment & decrement test ----" << std::endl;
	{
		Bureaucrat test("Denis", 1);
		Bureaucrat test2("Gerard", 150);
		Bureaucrat test3;
		test.incrementGrade();
		test2.decrementGrade();
		test3.incrementGrade();
		test.decrementGrade();
		std::cout << test;
		std::cout << test2;
		std::cout << test3;
	}
	return 0;
}

