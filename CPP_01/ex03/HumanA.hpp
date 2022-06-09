/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:17:31 by arudy             #+#    #+#             */
/*   Updated: 2022/06/09 17:30:00 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include <string>
#include "Weapon.hpp"
using namespace std;

class HumanA
{
	private:
		string	_name;
		Weapon	&_weapon;

	public:
		HumanA(string name, Weapon &weapon);
		~HumanA();
		void	attack();
};

#endif
