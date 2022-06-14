/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:45:43 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 15:48:35 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	_raw_bits = raw;
}

Fixed & Fixed::operator=( Fixed const & n)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_raw_bits = n.getRawBits();
	return *this;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_raw_bits = 0;
}

Fixed::Fixed( Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
