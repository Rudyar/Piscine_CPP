/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 19:11:13 by arudy             #+#    #+#             */
/*   Updated: 2022/06/12 19:18:24 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>
using namespace std;

class ClapTrap
{
	private:
		string			_name;
		int				_hit_pts;
		unsigned int	_energy_pts;
		unsigned int	_attack;

	public:
		ClapTrap(string name);
		ClapTrap( ClapTrap const &copy );
		~ClapTrap();
		ClapTrap	&operator=( ClapTrap const &a);
		void	attack(const string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
