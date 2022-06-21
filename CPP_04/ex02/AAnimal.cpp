/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:57:21 by arudy             #+#    #+#             */
/*   Updated: 2022/06/21 15:21:45 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal()
{
	std::cout << "Animal default constructor called" << std::endl;
	type = "Animal";
}

AAnimal::AAnimal( const AAnimal & src )
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal	&AAnimal::operator=( AAnimal const & rhs )
{
	std::cout << "Animal operator '=' called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	AAnimal::makeSound() const
{
	std::cout << "I'm an Animal !" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	AAnimal::getType() const
{
	return this->type;
}

void	AAnimal::setIdea(int i, std::string str)
{
	(void)i;
	(void)str;
}

std::string	AAnimal::getIdea(int i) const
{
	(void)i;
	return "Coucou";
}

/* ************************************************************************** */
