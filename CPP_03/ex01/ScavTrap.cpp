/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:51:15 by arudy             #+#    #+#             */
/*   Updated: 2022/06/13 18:56:51 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap()
{
	cout << "ScavTrap default constructor called" << endl;
	_name = "Norminet";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap(src)
{
	cout << "ScavTrap copy constructor called" << endl;
	*this = src;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name)
{
	cout << "ScavTrap with name constructor called" << endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap destructor called" << endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap	&ScavTrap::operator=(ScavTrap const &a)
{
	cout << "ScavTrap operator '=' called" << endl;
	ClapTrap::operator=(a);
	_name = a.getName();
	_hitPoints = a.getHitPoints();
	_energyPoints = a.getEnergyPoints();
	_attackDamage = a.getAttackDammage();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::guardGate()
{
	cout << "ScavTrap " << _name << " is in Gate Keeper mode !" << endl;
}

void	ScavTrap::attack(const string &target)
{
	if (_hitPoints <=0)
		cout << "SavTrap have not enough hit points to attack " << target << endl;
	else if (_energyPoints <= 0)
		cout << "SavTrap have no more energy points to attack " << target << endl;
	else
	{
		cout << "SavTrap " << _name << " attacks " << target << ", causing " << _attackDamage;
		cout << " points of damage !" << endl;
		_energyPoints--;
	}
}
