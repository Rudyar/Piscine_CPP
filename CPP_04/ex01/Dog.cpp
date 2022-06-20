/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:57:31 by arudy             #+#    #+#             */
/*   Updated: 2022/06/20 19:05:26 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	_brain = new Brain();
}

Dog::Dog( const Dog & src ) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	if (_brain)
		delete _brain;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog operator '=' called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound() const
{
	std::cout << "Waf Waf Waf" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void	Dog::setIdea(int i, std::string str)
{
	_brain->setIdea(i, str);
}

std::string	Dog::getIdea(int i) const
{
	return _brain->getIdea(i);
}

/* ************************************************************************** */
