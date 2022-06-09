/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:00:39 by arudy             #+#    #+#             */
/*   Updated: 2022/06/09 15:45:42 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	cout << this->_name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void	Zombie::setName(string name)
{
	this->_name = name;
}


Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	cout << this->_name << ": Is dead by daylight" << endl;
}
