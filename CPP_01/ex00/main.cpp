/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:01:17 by arudy             #+#    #+#             */
/*   Updated: 2022/06/09 14:55:44 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	cout << "=======================================" << endl;
	cout << "3 Zombies created by newZombie function" << endl;
	cout << "=======================================" << endl << endl;
	Zombie *first_zombie = newZombie("Louis");
	Zombie *second_zombie = newZombie("Robin");
	Zombie *third_zombie = newZombie("Julien");
	cout << endl << "------- Use delete to destroy the 3 zombies ----" << endl << endl;
	delete (first_zombie);
	delete (second_zombie);
	delete (third_zombie);
	cout << endl << endl << endl;
	cout << "=========================================" << endl;
	cout << "3 Zombies created by randomChump function" << endl;
	cout << "=========================================" << endl << endl;
	Zombie("Ugo");
	Zombie("Denis");
	Zombie("Jean");
	return (0);
}
