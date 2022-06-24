/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 09:28:15 by arudy             #+#    #+#             */
/*   Updated: 2022/06/24 14:18:35 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

size_t	findPrecision(std::string s)
{
	size_t	i = 0;
	size_t	j = 0;

	for (; i < s.length(); i++)
	{
		if (s[i] == '.')
		{
			for (; i < s.length(); i++)
				j++;
			return j - 1;
		}
	}
	return 1;
}

void	convertChar(std::string s, double n)
{
	char c = s[0];

	if (s.length() < 2)
	{
		if (isdigit(static_cast<int>(c)))
			c -= 48;
		if (static_cast<int>(c) > 31 && static_cast<int>(c) < 127)
			std::cout << "Char : '" << c << "'" << std::endl;
		else
			std::cout << "Char : non displayable" << std::endl;
	}
	else
	{
		if (n > 31 && n < 127)
			std::cout << "Char : '" << static_cast<char>(n) << "'" << std::endl;
		else
			std::cout << "Char : non displayable" << std::endl;
	}
}

void	convertInt(std::string s, double n)
{
	if (s.length() < 2)
		n = static_cast<int>(s[0]);
	if (n < INT_MIN || n > INT_MAX)
		std::cout << "Int : impossible" << std::endl;
	else
		std::cout << "Int : " << static_cast<int>(n) << std::endl;
}

void	convertFloat(std::string s, double n)
{
	if (s.length() < 2)
		n = static_cast<int>(s[0]);
	std::cout.precision(findPrecision(s));
	std::cout << "Float : " << std::fixed << static_cast<float>(n) << "f" << std::endl;
}

void	convertDouble(std::string s, double n)
{
	if (s.length() < 2)
		n = static_cast<int>(s[0]);
	std::cout.precision(findPrecision(s));
	std::cout << "Double : " << std::fixed << static_cast<double>(n) << std::endl;
}
