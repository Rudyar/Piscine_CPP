/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:57:28 by arudy             #+#    #+#             */
/*   Updated: 2022/06/20 19:06:31 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	_brain = new Brain();
}

Cat::Cat( const Cat & src ) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain();
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	if (_brain)
		delete _brain;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &	Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat operator '=' called" << std::endl;
	this->type = rhs.getType();
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound() const
{
	std::cout << "Miaaaaaaoooou" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void	Cat::setIdea(int i, std::string str)
{
	_brain->setIdea(i, str);
}

std::string	Cat::getIdea(int i) const
{
	return _brain->getIdea(i);
}


/* ************************************************************************** */
