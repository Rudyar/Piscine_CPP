/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:42:36 by arudy             #+#    #+#             */
/*   Updated: 2022/06/17 16:53:38 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong Animal default constructor called" << std::endl;
	type = "Not an Animal";
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "Wrong Animal copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "Wrong Animal operator '=' called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongAnimal::makeSound() const
{
	std::cout << "I'm a wrong animal !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	WrongAnimal::getType() const
{
	return this->type;
}

/* ************************************************************************** */
