/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:57:40 by arudy             #+#    #+#             */
/*   Updated: 2022/06/21 16:31:09 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	int n = 4;
	std::cout << "---- ANIMALS ----" << std::endl;
	AAnimal* meta[n];
	for (int i = 0; i < n; i++)
	{
		if (i < 2)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	std::cout << std::endl << std::endl;
	std::cout << "---- Print Ideas ----" << std::endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 5; j++)
			std::cout << "Meta " << i << " : " << meta[i]->getIdea(j) << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << "---- Modify ideas ----" << std::endl;
	meta[1]->setIdea(0, "coucou");
	meta[1]->setIdea(1, "coucou les loulous");
	meta[1]->setIdea(2, "coucou les lalas");
	for (int i = 0; i < 5; i++)
		std::cout << "Meta " << 1 << " : " << meta[1]->getIdea(i) << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << "---- Test deep copy Dog ----" << std::endl;
	Dog dog1;
	Dog dog2(dog1);
	dog1.setIdea(0, "salut");
	dog1.setIdea(1, "ca va");
	dog1.setIdea(2, "ouiii");
	for (int i = 0; i < 4; i++)
		std::cout << "Dog 1" << " : " << dog1.getIdea(i) << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << "Dog 2" << " : " << dog2.getIdea(i) << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << "---- Test deep copy Cat ----" << std::endl;
	Cat cat1;
	Cat cat2(cat1);
	cat1.setIdea(0, "salut");
	cat1.setIdea(1, "ca va");
	cat1.setIdea(2, "ouiii");
	for (int i = 0; i < 4; i++)
		std::cout << "Cat 1" << " : " << cat1.getIdea(i) << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << "Cat 2" << " : " << cat2.getIdea(i) << std::endl;

	std::cout << std::endl << std::endl;
	for (int i = 0; i < n; i++)
		delete meta[i];

	// AAnimal* a = new AAnimal();

	return 0;
}
