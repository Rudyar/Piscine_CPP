/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:01:17 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 15:48:35 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "=======================================" << std::endl;
	std::cout << "3 Zombies created by newZombie function" << std::endl;
	std::cout << "=======================================" << std::endl << std::endl;
	Zombie *first_zombie = newZombie("Louis");
	Zombie *second_zombie = newZombie("Robin");
	Zombie *third_zombie = newZombie("Julien");
	std::cout << std::endl << "------- Use delete to destroy the 3 zombies ----" << std::endl << std::endl;
	delete (first_zombie);
	delete (second_zombie);
	delete (third_zombie);
	std::cout << std::endl << std::endl << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << "3 Zombies created by randomChump function" << std::endl;
	std::cout << "=========================================" << std::endl << std::endl;
	Zombie("Ugo");
	Zombie("Denis");
	Zombie("Jean");
	return (0);
}
