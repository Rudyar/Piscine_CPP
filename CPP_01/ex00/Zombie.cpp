/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:00:39 by arudy             #+#    #+#             */
/*   Updated: 2022/06/09 12:27:21 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	cout << this->_name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie(string name)
{
	this->_name = name;
	announce();
}

Zombie::~Zombie()
{
	cout << this->_name << ": Is dead by daylight" << endl;
	// delete...
}
