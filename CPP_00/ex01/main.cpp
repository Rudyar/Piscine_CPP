/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:38:23 by arudy             #+#    #+#             */
/*   Updated: 2022/06/07 16:18:40 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phone_book;
	string		input;

	cout << endl << CYAN << "==== WELCOME TO MY AWESOME PHONEBOOK ====" << RES << endl << endl;
	while (input != "EXIT")
	{
		cout << MAG << "What would you like to do ? ADD, SEARCH or EXIT \n> " << RES;
		getline(cin, input);
		if (cin.eof())
			break ;
		if (input == "ADD")
			phone_book.add_contact();
		else if (input == "SEARCH")
			phone_book.display_contacts();
	}
	cout << GREEN << "Bye bye" << RES << endl;
	return (0);
}
