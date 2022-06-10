/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:57:01 by arudy             #+#    #+#             */
/*   Updated: 2022/06/10 18:40:25 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void )
{
	cout << "[ DEBUG ]" << endl;
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-";
	cout << "ketchup burger. I really do!" << endl << endl;
}

void	Harl::info( void )
{
	cout << "[ INFO ]" << endl;
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put ";
	cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl << endl;

}

void	Harl::warning( void )
{
	cout << "[ WARNING ]" << endl;
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for ";
	cout << "years whereas you started working here since last month." << endl << endl;

}

void	Harl::error( void )
{
	cout << "[ ERROR ]" << endl;
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void	Harl::complain(string level)
{
	void	(Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	string list[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (list[i] == level)
		{
			(this->*func[i])();
			return ;
		}
	}
}

Harl::Harl( void )
{
}

Harl::~Harl()
{
}
