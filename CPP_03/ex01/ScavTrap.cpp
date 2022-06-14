/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:51:15 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 15:52:05 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap with name constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap	&ScavTrap::operator=(ScavTrap const &a)
{
	std::cout << "ScavTrap operator '=' called" << std::endl;
	ClapTrap::operator=(a);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is in Gate Keeper mode !" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_hitPoints <=0)
		std::cout << "SavTrap have not enough hit points to attack " << target << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "SavTrap have no more energy points to attack " << target << std::endl;
	else
	{
		std::cout << "SavTrap " << _name << " attacks " << target << ", causing " << _attackDamage;
		std::cout << " points of damage !" << std::endl;
		_energyPoints--;
	}
}
