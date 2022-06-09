/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:16:50 by arudy             #+#    #+#             */
/*   Updated: 2022/06/09 17:28:57 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>
using namespace std;

class Weapon
{
	private:
		string	_type;
	public:
		Weapon(string weapon);
		const string	&getType();
		void			setType(string new_type);
		~Weapon();
};

#endif
