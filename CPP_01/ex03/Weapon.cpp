/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:17:33 by arudy             #+#    #+#             */
/*   Updated: 2022/06/09 17:41:28 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const string	&Weapon::getType()
{
	string &str = _type;
	return (str);
}

void	Weapon::setType(string new_type)
{
	_type = new_type;
}

Weapon::Weapon(string weapon)
{
	setType(weapon);
}

Weapon::~Weapon()
{
}
