/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:56:36 by arudy             #+#    #+#             */
/*   Updated: 2022/06/23 19:57:42 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

// void	convertToChar(char *arg)
// {
// 	std::string	s = arg;
// 	if (s.length() != 1)
// 	{
// 		std::cout << "error char" << std::endl;
// 		return ;
// 	}

// }

int main(int ac, char**av)
{
	if (ac != 2)
	{
		std::cout << "./convert <arg>" << std::endl;
		return 1;
	}
	// convertToChar(av[1]);
	/*
	checker l'input pour voir si c'est un char, un int, un float ou un double et les reste (nan ...)
	en fonction  du retour, aller dans la bonne function.
	if is char...
	Selon moi il faut utiliser les static cast
	Regarder ce que c'est le std::precision
	*/
	return 0;
}
