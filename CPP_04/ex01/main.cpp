/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:57:40 by arudy             #+#    #+#             */
/*   Updated: 2022/06/20 18:42:26 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	int n = 6;
	std::cout << "---- ANIMALS ----" << std::endl;
	const Animal* meta[n];
	for (int i = 0; i < n; i++)
	{
		if (i < 3)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	std::cout << std::endl << std::endl;
	for (int i = 0; i < n; i++)
		meta[i]->getIdea(i);
	std::cout << std::endl << std::endl;

	for (int i = 0; i < n; i++)
		delete meta[i];
	return 0;
}
