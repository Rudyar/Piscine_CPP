/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:32:01 by arudy             #+#    #+#             */
/*   Updated: 2022/06/15 17:21:21 by arudy            ###   ########.fr       */
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

void	contact_header(int n)
{
	if (n == 1)
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|     Index|First Name| Last Name| Nick Name|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
	}
	else
	{
		std::cout << "--------------------------------------------------------" << std::endl;
		std::cout << "|     Index|First Name| Last Name| Nick Name|    Secret|" << std::endl;
		std::cout << "|----------|----------|----------|----------|----------|" << std::endl;
	}
}

void	Contact::display_contact(int n)
{
	int	i;

	std::cout << "|";
	for (i = 0; i < 9; i++)
		std::cout << " ";
	std::cout << this->index + 1 << "|";
	if (this->first_name.size() > 10)
		std::cout << this->first_name.substr(0, 9) << "." << "|";
	else
	{
		for (i = 0 + this->first_name.size(); i < 10; i++)
			std::cout << " ";
		std::cout << this->first_name << "|";
	}

	if (this->last_name.size() > 10)
		std::cout << this->last_name.substr(0, 9) << "." << "|";
	else
	{
		for (i = 0 + this->last_name.size(); i < 10; i++)
			std::cout << " ";
		std::cout << this->last_name << "|";
	}
	if (this->nick_name.size() > 10)
		std::cout << this->nick_name.substr(0, 9) << "." << "|";
	else
	{
		for (i = 0 + this->nick_name.size(); i < 10; i++)
			std::cout << " ";
		std::cout << this->nick_name << "|";
	}
	if (n == 1)
	{
		if (this->darkest_secret.size() > 10)
			std::cout << this->darkest_secret.substr(0, 9) << "." << "|";
		else
		{
			for (i = 0 + this->darkest_secret.size(); i < 10; i++)
				std::cout << " ";
			std::cout << this->darkest_secret << "|";
		}
	}
	std::cout << std::endl;
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
		if (s[i] != ' ' && s[i] != '\t')
			return (0);
	}
	std::cout << RED << "Input can't be only whitespaces" << RES << std::endl;
	return (1);
}

int	check_phone_number(std::string s)
{
	for (size_t i = 0; i < s.size(); i++)
	{
		if (!isdigit(s[i]) && s[i] != '+')
		{
			std::cout << RED << "Phone Number can be compose only by numbers and '+'" << RES << std::endl;
			return (1);
		}
	}
	return (0);
}

void	Contact::set_firstname()
{
	std::string str;

	while (str.empty() || check_str(str))
	{
		std::cout << "New contact First Name \n> ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if (str.empty())
			std::cout << RED << "Input can't be empty" << RES << std::endl;

	}
	this->first_name = str;
}

void	Contact::set_lastname()
{
	std::string str;

	while (str.empty() || check_str(str))
	{
		std::cout << "New contact Last Name \n> ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if (str.empty())
			std::cout << RED << "Input can't be empty" << RES << std::endl;
	}
	this->last_name = str;
}

void	Contact::set_nickname()
{
	std::string str;

	while (str.empty() || check_str(str))
	{
		std::cout << "New contact nick name \n> ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if (str.empty())
			std::cout << RED << "Input can't be empty" << RES << std::endl;
	}
	this->nick_name = str;
}

void	Contact::set_phonenumber()
{
	std::string str;

	while (str.empty() || check_str(str) || check_phone_number(str))
	{
		std::cout << "New contact phone number \n> ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if (str.empty())
			std::cout << RED << "Input can't be empty" << RES << std::endl;
	}
	this->phone_number = str;
}

void	Contact::set_darkestsecret()
{
	std::string str;

	while (str.empty() || check_str(str))
	{
		std::cout << "New contact darkest secret \n> ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if (str.empty())
			std::cout << RED << "Input can't be empty" << RES << std::endl;
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
