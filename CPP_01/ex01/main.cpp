/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:01:17 by arudy             #+#    #+#             */
/*   Updated: 2022/06/09 16:01:54 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 5;
	string name = "Denis";
	Zombie *zombies = zombieHorde(N, name);
	if (!zombies)
		return (1);
	cout << "=======================================" << endl;
	cout << N << " Zombies created by zombieHorde function" << endl;
	cout << "=======================================" << endl << endl;
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	cout << "=======================================" << endl << endl;
	delete [] zombies;
	return (0);
}
