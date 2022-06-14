/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:21:33 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 15:52:05 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap with name constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap	&FragTrap::operator=(FragTrap const &a)
{
	std::cout << "FragTrap operator '=' called" << std::endl;
	ClapTrap::operator=(a);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " : High Five Guys ?!" << std::endl;
}
