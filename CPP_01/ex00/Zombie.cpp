/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:00:39 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 16:06:21 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	announce();
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": Is dead by daylight" << std::endl;
}
