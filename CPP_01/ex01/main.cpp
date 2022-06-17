/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:01:17 by arudy             #+#    #+#             */
/*   Updated: 2022/06/17 13:56:58 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 5;
	std::string name = "Denis";
	Zombie *zombies = zombieHorde(N, name);
	if (!zombies)
		return (1);
	std::cout << "=======================================" << std::endl;
	std::cout << N << " Zombies created by zombieHorde function" << std::endl;
	std::cout << "=======================================" << std::endl << std::endl;
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	std::cout << "=======================================" << std::endl << std::endl;
	delete [] zombies;
	return (0);
}
