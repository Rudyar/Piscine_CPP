/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:28:25 by arudy             #+#    #+#             */
/*   Updated: 2022/06/07 15:41:51 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

// A SUPPRIMER
void	PhoneBook::test()
{
	for (size_t i = 0; i < 4; i++)
		this->contact[i].random_create(i);
}

int	PhoneBook::nb_contacts()
{
	int		n = 0;
	string	check_name;

	while (n < 8)
	{
		check_name = this->contact[n].get_firstname();
		if (check_name.empty())
			break ;
		n++;
	}
	return (n);
}

void	PhoneBook::display_contacts()
{
	int		i;
	string	check_name;

	check_name = this->contact[0].get_firstname();
	if (check_name.empty())
	{
		cout << "Phone Book is empty, you can create a new contact" << endl;
		return ;
	}
	contact_header();
	for (i = 0; i < nb_contacts(); i++)
	{
		this->contact[i].display_contact();
		if (i != nb_contacts() - 1)
			cout << "|----------|----------|----------|----------|" << endl;
		else
			cout << "---------------------------------------------" << endl;
	}
	this->search_contact();
}

void	PhoneBook::search_contact()
{
	string	input;
	int		n = 0;

	while (input.empty() || n > nb_contacts() || n < 1)
	{
		cout << "Enter contact's index (from 1 to 8) to see all his details\n> ";
		getline(cin, input);
		if (cin.eof())
			exit(0);
		if (input.length() == 1 && isdigit(input[0]))
		{
			n = input[0] - 48;
			if (n < nb_contacts() && n > 0)
				break ;
		}
		cout << "Wrong index" << endl;
	}
	cout << "Here, all details of the contact" << endl;
	contact_header();

	this->contact[n - 1].display_contact();
	cout << "---------------------------------------------" << endl;
}

void	PhoneBook::add_contact()
{
	int	i = 0;

	std::cout << "Add a new contact to the Phone Book" << std::endl;
	for (i = 0; i < 8; i++)
		if (this->contact[i].get_firstname().empty())
			break ;
	if (i >= 8)
	{
		std::cout << "Phone Book is full, oldest contact will be replaced by the new one" << std::endl;
		for (size_t j = 0; j < 7; j++)
		{
			this->contact[j] = this->contact[j + 1];
			this->contact[j].set_index(j);
		}
		i = 7;
	}
	this->contact[i].create_contact(i);
}
