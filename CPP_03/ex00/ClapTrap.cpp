/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 19:10:49 by arudy             #+#    #+#             */
/*   Updated: 2022/06/13 11:13:05 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack(const string &target)
{
	if (_hitPoints <=0)
		cout << "ClapTrap have not enough hit points to attack " << target << endl;
	else if (_energyPoints <= 0)
		cout << "ClapTrap have no more energy points to attack " << target << endl;
	else
	{
		cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage;
		cout << " points of damage !" << endl;
		_energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		cout << "Claptrap " << _name << " is already dead" << endl;
		return ;
	}
	if (_hitPoints < amount)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	cout << "ClapTrap " << _name << " takes " << amount << " damage points. Actual hit points : " << _hitPoints << endl;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0)
		cout << "ClapTrap have no more energy points to be repaired" << endl;
	else
	{
		_energyPoints--;
		_hitPoints += amount;
		cout << "ClapTrap " << _name << " regained " << amount << " hit points, actual hit points : " << _hitPoints << endl;
	}
}

// ==== Getters ====

string	ClapTrap::getName(void) const
{
	return _name;
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return _hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return _energyPoints;
}

unsigned int	ClapTrap::getAttackDammage(void) const
{
	return _attackDamage;
}

// ==== Canon ====

ClapTrap::ClapTrap() : _name("Unknow"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	cout << "Default constructor called" << endl;
}

ClapTrap::ClapTrap(string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	cout << "With name constructor called" << endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	cout << "Copy constructor called" << endl;
	*this = src;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &a)
{
	cout << "'=' operator called" << endl;
	_name = a.getName();
	_hitPoints = a.getHitPoints();
	_energyPoints = a.getEnergyPoints();
	_attackDamage = a.getAttackDammage();
	return *this;
}

ClapTrap::~ClapTrap()
{
	cout << "Destructor called" << endl;
}

