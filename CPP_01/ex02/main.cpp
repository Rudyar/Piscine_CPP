/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:06:37 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 15:55:12 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "Memory address of str : " << &str << std::endl;
	std::cout << "Memory address of ptr : " << ptr << std::endl;
	std::cout << "Memory address of ref : " << &ref << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "Value of str : " << str << std::endl;
	std::cout << "Value of ptr : " << *ptr << std::endl;
	std::cout << "Value of ref : " << ref << std::endl;
	return (0);
}
