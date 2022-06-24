/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:56:36 by arudy             #+#    #+#             */
/*   Updated: 2022/06/24 11:25:53 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

bool	isChar(std::string s) // Pour l'instant check aussi les int < 9
{
	if (s.length() > 1)
		return false;
	return true;
}

bool isInt(std::string s)
{
	size_t i = 0;

	if (!isdigit(static_cast<int>(s[i])) && s[i] != '-' && s[i] != '+')
		return false;
	if (s[i] == '-' || s[i] == '+')
		i++;
	for (; i < s.length(); i++)
		if (!isdigit(static_cast<int>(s[i])))
			return false;
	return true;
}

int main(int ac, char**av)
{
	if (ac != 2)
	{
		std::cout << "./convert <arg>" << std::endl;
		return 1;
	}
	if (isChar(av[1]))
		convertChar(av[1]);
	else if (isInt(av[1]))
		convertInt(av[1]);



	/*
	checker l'input pour voir si c'est un char, un int, un float ou un double et les reste (nan ...)
	en fonction  du retour, aller dans la bonne function.
	if is char...
	Selon moi il faut utiliser les static cast
	Regarder ce que c'est le std::precision

	./convert a
	char : 'a'
	int : 97
	float : 97.0f
	double : 97.00
	*/
	return 0;
}
