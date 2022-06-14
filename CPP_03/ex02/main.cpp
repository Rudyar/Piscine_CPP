/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 19:10:13 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 12:38:20 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	{
		cout << endl << "=========== CLAPTRAP ===========" << endl << endl;
		cout << "==== Constructor ====" << endl;
		ClapTrap Louis;
		ClapTrap Ugo("Ugo");
		ClapTrap Julien = Ugo;

		cout << endl << "==== Attack ====" << endl;
		Louis.attack("Arthur");
		Ugo.attack("Arthur");
		Julien.attack("Arthur");

		cout << endl << "==== Take damage ====" << endl;
		Ugo.takeDamage(12);
		Ugo.takeDamage(12);
		Louis.takeDamage(1);
		Louis.takeDamage(0);

		cout << endl << "==== Be repaired ====" << endl;
		Ugo.beRepaired(50);
		Louis.beRepaired(1);
		Julien.beRepaired(0);
		cout << endl << "==== Destructors ====" << endl;
	}

	{
		cout << endl << "===========FRAGTRAP ===========" << endl << endl;
		cout << "==== Constructor ====" << endl;
		FragTrap Louis;
		FragTrap Ugo("Ugo");
		FragTrap Julien = Ugo;

		cout << endl << "==== Attack ====" << endl;
		Louis.attack("Arthur");
		Ugo.attack("Arthur");
		Julien.attack("Arthur");

		cout << endl << "==== Take damage ====" << endl;
		Ugo.takeDamage(12);
		Ugo.takeDamage(12);
		Louis.takeDamage(1);
		Louis.takeDamage(0);

		cout << endl << "==== Be repaired ====" << endl;
		Ugo.beRepaired(50);
		Louis.beRepaired(1);
		Julien.beRepaired(0);

		cout << endl << "==== High Five function ====" << endl;
		Julien.highFivesGuys();
		Louis.highFivesGuys();
		cout << endl << "==== Destructors ====" << endl;
	}

	return 0;
}
