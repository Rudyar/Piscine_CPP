/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:56:00 by arudy             #+#    #+#             */
/*   Updated: 2022/06/29 14:32:29 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 2};
	std::vector<int> vector(tab, tab + 7);
	for (size_t i = 0; i < 7; i++)
		std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
	std::cout << std::endl << "Find index of 2 in int tab" << std::endl;
	std::cout << "Index of first occurence of 2 : " << *easyfind(vector, 2) - 1 << std::endl;
	try
	{
		std::cout << std::endl << "Find index of 123 in int tab" << std::endl;
		std::cout << "Index of first occurence of 123 : " << *easyfind(vector, 123) - 1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
