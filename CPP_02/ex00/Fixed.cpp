/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:45:43 by arudy             #+#    #+#             */
/*   Updated: 2022/06/11 18:04:06 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::getRawBits( void ) const
{
	cout << "getRawBits member function called" << endl;
	return (_raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	_raw_bits = raw;
}

Fixed & Fixed::operator=( Fixed const & n)
{
	cout << "Copy assignement operator called" << endl;
	_raw_bits = n.getRawBits();
	return *this;
}

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	_raw_bits = 0;
}

Fixed::Fixed( Fixed const & src)
{
	cout << "Copy constructor called" << endl;
	*this = src;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}
