/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:00:36 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 16:09:59 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 1)
	{
		std::cout << "N as to be positive" << std::endl;
		return (NULL);
	}
	if (name.empty())
	{
		std::cout << "Name can't be empty" << std::endl;
		return (NULL);
	}
	Zombie	*zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombies[i].setName(name);
	return (zombies);
}
