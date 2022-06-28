/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:12:48 by arudy             #+#    #+#             */
/*   Updated: 2022/06/28 20:21:03 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	std::cout << "---- Create default Array & try to read invalid index ----" << std::endl;
	Array<int> a;
	try
	{
		std::cout << a[1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "---- Create Array of size 10 & add values ----" << std::endl;
	Array<int>	b(10);
	for (size_t i = 0; i < 10; i++)
		b[i] = i;
	try
	{
		std::cout << "Read b[1] : " << b[1] << std::endl;
		std::cout << "Read b[9] : " << b[9] << std::endl;
		std::cout << "Read b[10] : " << b[10] << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "---- Test copy constructor ----" << std::endl;
	Array<int>	c(b);
	std::cout << "Array of c" << std::endl;
	for (size_t i = 0; i < 10; i++)
		std::cout << "c[i] = " << c[i] << std::endl;
	std::cout << "Modify value of c" << std::endl;
	for (size_t i = 0; i < 10; i++)
		c[i] = i + 1000;
	std::cout << "Array of c" << std::endl;
	for (size_t i = 0; i < 10; i++)
		std::cout << "c[i] = " << c[i] << std::endl;
	std::cout << "Array of b" << std::endl;
	for (size_t i = 0; i < 10; i++)
		std::cout << "b[i] = " << b[i] << std::endl;

	std::cout << std::endl;
	return 0;
}
