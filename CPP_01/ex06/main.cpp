/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:54:28 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 15:52:05 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	int	i;
	std::string list[4] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
	};

	if(ac != 2)
		return (1);
	std::string level = av[1];
	for (i = 0; i < 4; i++)
	{
		if (list[i] == level)
			break ;
	}
	switch (i)
	{
	case 0:
		harl.complain("DEBUG");
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
		break ;
	case 1:
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
		break;
	case 2:
		harl.complain("WARNING");
		harl.complain("ERROR");
		break;
	case 3:
		harl.complain("ERROR");
		break;
	default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return (0);
}
