/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:28:25 by arudy             #+#    #+#             */
/*   Updated: 2022/06/15 17:25:54 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

int	PhoneBook::nb_contacts()
{
	int		n = 0;
	std::string	check_name;

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
	std::string	check_name;

	check_name = this->contact[0].get_firstname();
	if (check_name.empty())
	{
		std::cout << YELLOW << "Phone Book is empty, you can create a new contact" << RES << std::endl;
		return ;
	}
	std::cout << CYAN << "==== Search contact in Phone Book ====" << RES << std::endl;
	contact_header(1);
	for (i = 0; i < nb_contacts(); i++)
	{
		this->contact[i].display_contact(0);
		if (i != nb_contacts() - 1)
			std::cout << "|----------|----------|----------|----------|" << std::endl;
		else
			std::cout << "---------------------------------------------" << std::endl;
	}
	this->search_contact();
}

void	PhoneBook::search_contact()
{
	std::string	input;
	int		n = 0;

	while (input.empty() || n > nb_contacts() || n < 1)
	{
		std::cout << YELLOW << "Enter contact's index (from 1 to " << nb_contacts() << ") to see all his details\n> " << RES;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		if (input.length() == 1 && isdigit(input[0]))
		{
			n = input[0] - 48;
			if (n <= nb_contacts() && n > 0)
				break ;
		}
		std::cout << RED << "Wrong index" << RES << std::endl;
	}
	std::cout << GREEN << "=== Here, all details of the contact ====" << RES << std::endl;
	contact_header(2);

	this->contact[n - 1].display_contact(1);
	std::cout << "--------------------------------------------------------" << std::endl;
}

void	PhoneBook::add_contact()
{
	int	i;

	std::cout << CYAN << "==== Add a new contact to Phone Book ====" << RES << std::endl;
	i = nb_contacts();
	if (i >= 8)
	{
		std::cout << YELLOW << "Phone Book is full, oldest contact will be replaced by the new one" << RES << std::endl;
		for (size_t j = 0; j < 7; j++)
		{
			this->contact[j] = this->contact[j + 1];
			this->contact[j].set_index(j);
		}
		i = 7;
	}
	this->contact[i].create_contact(i);
	std::cout << GREEN << "==== Contact created ! ====" << RES << std::endl;
}
