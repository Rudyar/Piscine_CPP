/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:17:57 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 15:55:39 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon	*_weapon;

	public:
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif
