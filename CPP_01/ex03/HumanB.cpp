/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:18:05 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 15:52:05 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	if (!_weapon)
		std::cout << _name << " can't attack, he has no weapon..."<< std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << "Human B " << _name << " is destroyed" << std::endl;
}
