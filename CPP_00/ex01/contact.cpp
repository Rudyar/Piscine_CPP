/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:32:01 by arudy             #+#    #+#             */
/*   Updated: 2022/06/07 15:13:30 by arudy            ###   ########.fr       */
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

void	contact_header()
{
	cout << "---------------------------------------------" << endl;
	cout << "|     Index|First Name| Last Name| Nick Name|" << endl;
	cout << "|----------|----------|----------|----------|" << endl;
}

void	Contact::display_contact()
{
	int	i;

	cout << "|";
	for (i = 0; i < 9; i++)
		cout << " ";
	cout << this->index + 1 << "|";
	if (this->first_name.size() > 10)
		cout << this->first_name.substr(0, 9) << "." << "|";
	else
	{
		for (i = 0 + this->first_name.size(); i < 10; i++)
			cout << " ";
		cout << this->first_name << "|";
	}

	if (this->last_name.size() > 10)
		cout << this->last_name.substr(0, 9) << "." << "|";
	else
	{
		for (i = 0 + this->last_name.size(); i < 10; i++)
			cout << " ";
		cout << this->last_name << "|";
	}
	if (this->nick_name.size() > 10)
		cout << this->nick_name.substr(0, 9) << "." << "|";
	else
	{
		for (i = 0 + this->nick_name.size(); i < 10; i++)
			cout << " ";
		cout << this->nick_name << "|";
	}
	cout << endl;
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

int	check_str(string s)
{

	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ')
			return (0);
	}
	cout << "Input can't be empty or only whitespaces" << endl;
	return (1);
}

int	check_phone_number(string s)
{
	for (size_t i = 0; i < s.size(); i++)
	{
		if (!isdigit(s[i]) && s[i] != '+')
		{
			cout << "Phone Number can be compose only by numbers and '+'" << endl;
			return (1);
		}
	}
	return (0);
}

void	Contact::set_firstname()
{
	string str;

	while (str.empty() || check_str(str))
	{
		cout << "New contact First Name \n> ";
		getline(cin, str);
		if (cin.eof())
			exit(0);
	}
	this->first_name = str;
}

void	Contact::set_lastname()
{
	string str;

	while (str.empty() || check_str(str))
	{
		cout << "New contact Last Name \n> ";
		getline(cin, str);
		if (cin.eof())
			exit(0);
	}
	this->last_name = str;
}

void	Contact::set_nickname()
{
	string str;

	while (str.empty() || check_str(str))
	{
		cout << "New contact nick name \n> ";
		getline(cin, str);
		if (cin.eof())
			exit(0);
	}
	this->nick_name = str;
}

void	Contact::set_phonenumber()
{
	string str;

	while (str.empty() || check_str(str) || check_phone_number(str))
	{
		cout << "New contact phone number \n> ";
		getline(cin, str);
		if (cin.eof())
			exit(0);
	}
	this->phone_number = str;
}

void	Contact::set_darkestsecret()
{
	string str;

	while (str.empty() || check_str(str))
	{
		cout << "New contact darkest secret \n> ";
		getline(cin, str);
		if (cin.eof())
			exit(0);
	}
	this->darkest_secret = str;
}

void	Contact::set_index(int index)
{
	this->index = index;
}

string	Contact::get_firstname()
{
	return (this->first_name);
}

string	Contact::get_lastname()
{
	return (this->last_name);
}

string	Contact::get_nickname()
{
	return (this->nick_name);
}

string	Contact::get_phonenumber()
{
	return (this->phone_number);
}

string	Contact::get_darkestsecret()
{
	return (this->darkest_secret);
}

int	Contact::get_index()
{
	return (this->index);
}
