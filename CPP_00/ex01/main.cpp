/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:38:23 by arudy             #+#    #+#             */
/*   Updated: 2022/06/06 20:14:46 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
using namespace std;

int	main(void)
{
	PhoneBook	phone_book;
	string		input;

	cout << "WELCOME TO AWESOME PHONEBOOK" << endl << endl;
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
	cout << "Ciao" << endl;
	return (0);
}
