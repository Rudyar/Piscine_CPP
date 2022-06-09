/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:18:05 by arudy             #+#    #+#             */
/*   Updated: 2022/06/09 17:56:03 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	if (!_weapon)
		cout << _name << " can't attack, he has no weapon..."<< endl;
	else
		cout << _name << " attacks with their " << _weapon->getType() << endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

HumanB::HumanB(string name)
{
	_name = name;
	_weapon = NULL;
}

HumanB::~HumanB()
{
	cout << "Human B " << _name << " is destroyed" << endl;
}
