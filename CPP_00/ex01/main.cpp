/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:38:23 by arudy             #+#    #+#             */
/*   Updated: 2022/06/15 17:08:22 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phone_book;
	std::string		input;

	std::cout << std::endl << CYAN << "==== WELCOME TO MY AWESOME PHONEBOOK ====" << RES << std::endl << std::endl;
	while (input != "EXIT")
	{
		std::cout << MAG << "What would you like to do ? ADD, SEARCH or EXIT \n> " << RES;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (input == "ADD")
			phone_book.add_contact();
		else if (input == "SEARCH")
			phone_book.display_contacts();
	}
	std::cout << GREEN << "Bye bye" << RES << std::endl;
	return (0);
}
