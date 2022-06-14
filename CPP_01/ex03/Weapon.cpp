/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:17:33 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 15:52:05 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	&Weapon::getType()
{
	std::string &str = _type;
	return (str);
}

void	Weapon::setType(std::string new_type)
{
	_type = new_type;
}

Weapon::Weapon(std::string weapon)
{
	setType(weapon);
}

Weapon::~Weapon()
{
}
