/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:56:36 by arudy             #+#    #+#             */
/*   Updated: 2022/06/24 14:10:07 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

bool	manageExceptions(std::string s)
{
	if (s == "nan" || s == "nanf")
	{
		std::cout << "Char : impossible" << std::endl;
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Float : nanf" << std::endl;
		std::cout << "Double : nan" << std::endl;
		return true;
	}
	return false;
}

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

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "./convert <arg>" << std::endl;
		return 1;
	}
	if (manageExceptions(av[1]))
		return 0;
	if (checkInput(av[1]) == false)
	{
		std::cout << "Wrong input" << std::endl;
		return 1;
	}
	double n = strtod(av[1], NULL);
	convertChar(av[1], n);
	convertInt(av[1], n);
	convertFloat(av[1], n);
	convertDouble(av[1], n);
	return 0;
}
