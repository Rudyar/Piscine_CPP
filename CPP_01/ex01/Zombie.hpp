/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:00:42 by arudy             #+#    #+#             */
/*   Updated: 2022/06/09 15:43:22 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <string>
using namespace std;

class Zombie
{
	private:
		string	_name;
	public:
		Zombie();
		Zombie(string name);
		~Zombie();
		void	announce( void );
		void	setName(string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
