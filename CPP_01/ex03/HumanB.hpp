/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:17:57 by arudy             #+#    #+#             */
/*   Updated: 2022/06/09 17:56:07 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"
using namespace std;

class HumanB
{
	private:
		string	_name;
		Weapon	*_weapon;

	public:
		HumanB(string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif
