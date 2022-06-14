/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 19:10:49 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 15:52:05 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string &target)
{
	if (_hitPoints <=0)
		std::cout << "ClapTrap have no more hit points, he can't attack " << target << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap have no more energy points to attack " << target << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage;
		std::cout << " points of damage !" << std::endl;
		_energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "Claptrap " << _name << " is already dead" << std::endl;
		return ;
	}
	if (_hitPoints < amount)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage points. Actual hit points : " << _hitPoints << std::endl;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0)
		std::cout << "ClapTrap have no more energy points to be repaired" << std::endl;
	else
	{
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " regained " << amount << " hit points, actual hit points : " << _hitPoints << std::endl;
	}
}

// ==== Getters ====

std::string	ClapTrap::getName(void) const
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
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &a)
{
	std::cout << "ClapTrap '=' operator called" << std::endl;
	_name = a.getName();
	_hitPoints = a.getHitPoints();
	_energyPoints = a.getEnergyPoints();
	_attackDamage = a.getAttackDammage();
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

