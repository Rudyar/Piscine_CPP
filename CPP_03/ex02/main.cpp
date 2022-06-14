/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 19:10:13 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 15:48:35 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << std::endl << "===========FRAGTRAP ===========" << std::endl << std::endl;
	std::cout << "==== Constructor ====" << std::endl;
	FragTrap Louis;
	FragTrap Ugo("Ugo");
	FragTrap Julien = Ugo;

	std::cout << std::endl << "==== Attack ====" << std::endl;
	Louis.attack("Arthur");
	Ugo.attack("Arthur");
	Julien.attack("Arthur");

	std::cout << std::endl << "==== Take damage ====" << std::endl;
	Ugo.takeDamage(12);
	Ugo.takeDamage(12);
	Louis.takeDamage(1);
	Louis.takeDamage(0);

	std::cout << std::endl << "==== Be repaired ====" << std::endl;
	Ugo.beRepaired(50);
	Louis.beRepaired(1);
	Julien.beRepaired(0);

	std::cout << std::endl << "==== High Five function ====" << std::endl;
	Julien.highFivesGuys();
	Louis.highFivesGuys();
	std::cout << std::endl << "==== Destructors ====" << std::endl;
	return 0;
}
