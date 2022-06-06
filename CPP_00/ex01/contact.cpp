/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:32:01 by arudy             #+#    #+#             */
/*   Updated: 2022/06/06 19:42:44 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nick_name = "";
	this->darkest_secret = "";
	this->phone_number = "";
	this->index = 0;
}

Contact::~Contact()
{
}

void	Contact::random_create(int i)
{
	this->first_name = "Denis";
	this->last_name = "Denis";
	this->nick_name = "Denis";
	this->phone_number = "Denis";
	this->darkest_secret = "Denis";
	this->index = i;
}

void	Contact::create_contact(int index)
{
	this->set_firstname();
	this->set_lastname();
	this->set_nickname();
	this->set_phonenumber();
	this->set_darkestsecret();
	this->set_index(index);
}

int	check_str(std::string s)
{

	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ')
		return (0);
	}
	return (1);
}

void	Contact::set_firstname()
{
	std::string str;

	while (str.empty() || check_str(str))
	{
		std::cout << "New contact First Name : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
	}
	this->first_name = str;
}

void	Contact::set_lastname()
{
	std::string str;

	while (str.empty() || check_str(str))
	{
		std::cout << "New contact Last Name : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
	}
	this->last_name = str;
}

void	Contact::set_nickname()
{
	std::string str;

	while (str.empty() || check_str(str))
	{
		std::cout << "New contact nick name : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
	}
	this->nick_name = str;
}

void	Contact::set_phonenumber()
{
	std::string str;

	while (str.empty() || check_str(str))
	{
		std::cout << "New contact phone number : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
	}
	this->phone_number = str;
}

void	Contact::set_darkestsecret()
{
	std::string str;

	while (str.empty() || check_str(str))
	{
		std::cout << "New contact darkest secret: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
	}
	this->darkest_secret = str;
}

void	Contact::set_index(int index)
{
	this->index = index;
}

std::string	Contact::get_firstname()
{
	return (this->first_name);
}

std::string	Contact::get_lastname()
{
	return (this->last_name);
}

std::string	Contact::get_nickname()
{
	return (this->nick_name);
}

std::string	Contact::get_phonenumber()
{
	return (this->phone_number);
}

std::string	Contact::get_darkestsecret()
{
	return (this->darkest_secret);
}

int	Contact::get_index()
{
	return (this->index);
}
