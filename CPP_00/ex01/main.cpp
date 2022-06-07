/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:38:23 by arudy             #+#    #+#             */
/*   Updated: 2022/06/07 15:27:41 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phone_book;
	string		input;

	cout << endl << "WELCOME TO AWESOME PHONEBOOK" << endl << endl;
	// A SUPPRIMER
	phone_book.test();
	while (input != "EXIT")
	{
		cout << "What would you like to do ? ADD, SEARCH or EXIT \n> ";
		getline(cin, input);
		if (cin.eof())
			break ;
		if (input == "ADD")
			phone_book.add_contact();
		else if (input == "SEARCH")
			phone_book.display_contacts();
	}
	cout << "Bye bye" << endl;
	return (0);
}
