/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 09:28:15 by arudy             #+#    #+#             */
/*   Updated: 2022/06/24 12:33:58 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

// void	convertChar(std::string s)
// {
// 	char c = s[0];
// 	if (isdigit(static_cast<int>(c)))
// 		c -= 48;
// 	if (static_cast<int>(c) > 31 && static_cast<int>(c) < 127)
// 		std::cout << "Char : '" << c << "'" << std::endl;
// 	else
// 		std::cout << "Char : Non Displayable" << std::endl;
// 	std::cout << "Int : " << static_cast<int>(c) << std::endl;
// 	std::cout.precision(2);
// 	std::cout << "Float : " << std::fixed << static_cast<float>(c) << "f" << std::endl;
// 	std::cout << "Double : " << std::fixed << static_cast<double>(c) << std::endl;
// }

// void	convertInt(char *s)
// {
// 	double n = strtod(s, NULL);

// 	if (n > 31 && n < 127)
// 		std::cout << "Char : '" << static_cast<char>(n) << "'" << std::endl;
// 	else
// 		std::cout << "Char : Non Displayable" << std::endl;
// 	if (n < INT_MIN || n > INT_MAX)
// 		std::cout << "Int : Impossible" << std::endl;
// 	else
// 		std::cout << "Int : " << static_cast<int>(n) << std::endl;
// 	std::cout.precision(2);
// 	std::cout << "Float : " << std::fixed << static_cast<float>(n) << "f" << std::endl;
// 	std::cout << "Double : " << std::fixed << static_cast<double>(n) << std::endl;
// }

// void	convertFloat(char *s)
// {
// 	double n = strtod(s, NULL);

// 	if (n > 31 && n < 127)
// 		std::cout << "Char : '" << static_cast<char>(n) << "'" << std::endl;
// 	else
// 		std::cout << "Char : Non Displayable" << std::endl;
// 	if (n < INT_MIN || n > INT_MAX)
// 		std::cout << "Int : Impossible" << std::endl;
// 	else
// 		std::cout << "Int : " << static_cast<int>(n) << std::endl;
// 	std::cout.precision(2);
// 	std::cout << "Float : " << std::fixed << static_cast<float>(n) << "f" << std::endl;
// 	std::cout << "Double : " << std::fixed << static_cast<double>(n) << std::endl;
// }

int	findPrecision(std::string s)
{
	int	i = 0;
	int	j = 0;
	for (; i < s.length(); i++)
	{
		if (s[i] == '.')
		{
			for (j = i; j < s.length(); j++)
				i++;
			return j;
		}
	}
	return 0;
}

void	convertChar(char *s, double n)
{
	char c = s[0];
	std::string str = s;
	double n = strtod(s, NULL);

	if (str.length() < 2)
	{
		if (isdigit(static_cast<int>(c)))
			c -= 48;
		if (static_cast<int>(c) > 31 && static_cast<int>(c) < 127)
			std::cout << "Char : '" << c << "'" << std::endl;
		else
			std::cout << "Char : Non Displayable" << std::endl;
	}
	else
	{
		if (n > 31 && n < 127)
			std::cout << "Char : '" << static_cast<char>(n) << "'" << std::endl;
		else
			std::cout << "Char : Non Displayable" << std::endl;
	}
}

void	convertInt(char *s, double n)
{
	if (n < INT_MIN || n > INT_MAX)
		std::cout << "Int : Impossible" << std::endl;
	else
		std::cout << "Int : " << static_cast<int>(n) << std::endl;
}

void	convertFloat(char *s, double n)
{
	std::cout.precision(findPrecision(s));
	std::cout << "Float : " << std::fixed << static_cast<float>(n) << "f" << std::endl;
}
