/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:38:23 by arudy             #+#    #+#             */
/*   Updated: 2022/06/06 18:50:22 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
using namespace std;

int	main(void)
{
	PhoneBook	phone_book;
	string		input;

	cout << "WELCOME TO AWESOME PHONEBOOK" << endl;
	phone_book.test();
	while (input != "EXIT")
	{
		cout << "What would you like to do ? ADD, SEARCH or EXIT \n> ";
		getline(cin, input);
		if (cin.eof())
			break ;
		if (input == "ADD")
		{
			phone_book.add_contact();
			cout << "ADD to phonebook" << endl;
		}
		else if (input == "SEARCH")
		{
			cout << "SEARCH in contact list" << endl;
			phone_book.display_contacts();
		}
	}
	cout << "Ciao" << endl;
	return (0);
}
