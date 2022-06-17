/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:42:45 by arudy             #+#    #+#             */
/*   Updated: 2022/06/17 16:57:13 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Wrong Cat default constructor called" << std::endl;
	type = "Not a Cat";
}

WrongCat::WrongCat( const WrongCat & src ) : WrongAnimal(src)
{
	std::cout << "Wrong Cat copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "WrongCat operator '=' called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongCat::makeSound() const
{
	std::cout << "uoooooooooaaaaaaaaaaaaiM" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
