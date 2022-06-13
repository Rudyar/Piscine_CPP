/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:51:20 by arudy             #+#    #+#             */
/*   Updated: 2022/06/13 18:54:51 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
using namespace std;

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();
		ScavTrap	&operator=(ScavTrap const & rhs);
		void		guardGate();
		void		attack(const string &target); // Overload attack funct from ClapTrap

};

#endif
