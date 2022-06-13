/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 19:10:13 by arudy             #+#    #+#             */
/*   Updated: 2022/06/13 11:12:10 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
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
	cout << endl;

	return 0;
}
