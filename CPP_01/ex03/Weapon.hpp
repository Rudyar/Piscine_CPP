/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:16:50 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 16:14:36 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string weapon);
		~Weapon();
		const std::string	&getType();
		void				setType(std::string new_type);
};

#endif
