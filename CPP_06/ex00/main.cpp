/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:56:36 by arudy             #+#    #+#             */
/*   Updated: 2022/06/24 12:34:14 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

// bool	isChar(std::string s) // Pour l'instant check aussi les int < 9
// {
// 	if (s.length() > 1)
// 		return false;
// 	return true;
// }

// bool	isInt(std::string s)
// {
// 	size_t i = 0;

// 	if (!isdigit(static_cast<int>(s[i])) && s[i] != '-' && s[i] != '+')
// 		return false;
// 	if (s[i] == '-' || s[i] == '+')
// 		i++;
// 	for (; i < s.length(); i++)
// 		if (!isdigit(static_cast<int>(s[i])))
// 			return false;
// 	return true;
// }

// bool	isFloat(std::string s)
// {
// 	size_t i = 0;

// 	if (!isdigit(static_cast<int>(s[i])) && s[i] != '-' && s[i] != '+')
// 		return false;
// 	if (s[s.length() - 1] != 'f')
// 		return false;
// 	if (s[i] == '-' || s[i] == '+')
// 		i++;
// 	for (; i < s.length() - 1; i++)
// 		if (!isdigit(static_cast<int>(s[i])) && s[i] != '.')
// 			return false;
// 	return true;
// }

// bool	isDouble(std::string s)
// {
// 	size_t i = 0;

// 	if (!isdigit(static_cast<int>(s[i])) && s[i] != '-' && s[i] != '+')
// 		return false;
// 	if (s[i] == '-' || s[i] == '+')
// 		i++;
// 	for (; i < s.length() - 1; i++)
// 		if (!isdigit(static_cast<int>(s[i])) && s[i] != '.')
// 			return false;
// 	return true;
// }

bool	checkInput(std::string s)
{
	size_t i = 0;

	if (s.empty())
		return false;
	if (s.length() < 2)
		return true;
	if (!isdigit(static_cast<int>(s[i])) && s[i] != '-' && s[i] != '+')
		return false;
	if (s[s.length() - 1] != 'f' && !isdigit(static_cast<int>(s[s.length() - 1])))
		return false;
	if (s[i] == '-' || s[i] == '+')
		i++;
	for (; i < s.length(); i++)
	{
		if (!isdigit(static_cast<int>(s[i])) && s[i] != '.')
		{
			if (i == s.length() - 1 && s[i] != 'f')
				return false;
		}
	}
	return true;
}

int main(int ac, char**av)
{
	if (ac != 2)
	{
		std::cout << "./convert <arg>" << std::endl;
		return 1;
	}
	// Manage exeptions
	if (checkInput(av[1]) == false)
	{
		std::cout << "Wrong input" << std::endl;
		return 1;
	}
	double n = strtod(av[1], NULL);
	convertChar(av[1], n);
	convertInt(av[1], n);
	convertFloat(av[1], n);
	// if (isChar(av[1]))
	// 	convertChar(av[1]);
	// else if (isInt(av[1]))
	// 	convertInt(av[1]);
	// else if (isFloat(av[1]))
	// 	convertFloat(av[1]);
	// else if (isDouble(av[1]))
	// 	convertInt(av[1]);
	return 0;
}
