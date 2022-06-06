/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:28:25 by arudy             #+#    #+#             */
/*   Updated: 2022/06/06 20:26:46 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::display_contacts()
{
	int	i;

	contact_header();
	for (i = 0; i < 8; i++)
	{
		this->contact[i].display_contact();
		if (i < 7)
			cout << "|----------|----------|----------|----------|" << endl;
		else
			cout << "---------------------------------------------" << endl;
	}
}

void	PhoneBook::test()
{
	for (size_t i = 0; i < 8; i++)
		this->contact[i].random_create(i);
}

void	PhoneBook::add_contact()
{
	int	i = 0;

	std::cout << "ADD to phonebook" << std::endl;
	for (i = 0; i < 8; i++)
		if (this->contact[i].get_firstname().empty())
			break ;
	if (i >= 8)
	{
		std::cout << "Phone Book is full, first contact will be deleted" << std::endl;
		for (size_t j = 0; j < 7; j++)
		{
			this->contact[j] = this->contact[j + 1];
			this->contact[j].set_index(j);
		}
		i = 7;
	}
	this->contact[i].create_contact(i);
}
