/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:28:25 by arudy             #+#    #+#             */
/*   Updated: 2022/06/06 19:07:29 by arudy            ###   ########.fr       */
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
	for (size_t i = 0; i < 8; i++)
	{
		std::cout << "Index : " << this->contact[i].get_index();
		std::cout << " | ";
		std::cout << "First Name : " << this->contact[i].get_firstname();
		std::cout << " | ";
		std::cout << "Last Name : " << this->contact[i].get_lastname();
		std::cout << " | ";
		std::cout << "Nick Name : " << this->contact[i].get_nickname();
		std::cout << " | ";
		std::cout << "Phone Number: " << this->contact[i].get_phonenumber();
		std::cout << " | ";
		std::cout << "Darkest secret : " << this->contact[i].get_darkestsecret() << std::endl;
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

	for (i = 0; i < 8; i++)
	{
		if (this->contact[i].get_firstname().empty())
		{
			this->contact[i].create_contact(i);
			return ;
		}
	}
	if (i >= 8)
	{
		std::cout << "Phone Book is full, first contact will be deleted" << std::endl;
		for (size_t j = 0; j < 7; j++)
		{
			this->contact[j] = this->contact[j + 1];
			this->contact[j].set_index(j);
		}
		this->contact[7].create_contact(7);
	}
}
