/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:00:42 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 16:06:08 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce( void );
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
