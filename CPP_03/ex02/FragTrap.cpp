/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:21:33 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 12:56:07 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap()
{
	cout << "FragTrap default constructor called" << endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src)
{
	cout << "FragTrap copy constructor called" << endl;
	*this = src;
}

FragTrap::FragTrap(string name) : ClapTrap(name)
{
	cout << "FragTrap with name constructor called" << endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	cout << "FragTrap destructor called" << endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap	&FragTrap::operator=(FragTrap const &a)
{
	cout << "FragTrap operator '=' called" << endl;
	ClapTrap::operator=(a);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	FragTrap::highFivesGuys(void)
{
	cout << "FragTrap " << _name << " : High Five Guys ?!" << endl;
}
