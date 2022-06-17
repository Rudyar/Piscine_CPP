/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:57:40 by arudy             #+#    #+#             */
/*   Updated: 2022/06/17 16:58:05 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "---- ANIMALS ----" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Cat* c = new Cat();
	Dog *d = new Dog();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	std::cout << d->getType() << " " << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	c->makeSound();
	d->makeSound();
	delete meta;
	delete i;
	delete j;
	delete c;
	delete d;

	// std::cout << std::endl << std::endl << "---- WRONG ANIMALS ----" << std::endl;
	// const WrongAnimal* loulou = new WrongAnimal();
	// std::cout << loulou->getType() << " " << std::endl;
	// delete loulou;

	return 0;
}
