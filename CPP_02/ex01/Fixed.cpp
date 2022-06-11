/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:45:43 by arudy             #+#    #+#             */
/*   Updated: 2022/06/11 18:45:32 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::getRawBits( void ) const
{
	return _raw_bits;
}

void	Fixed::setRawBits(int const raw)
{
	_raw_bits = raw;
}

float	Fixed::toFloat( void ) const
{
	return 0;
}

int	Fixed::toInt( void ) const
{
	return 0;
}

ostream	&operator<<(ostream &o, Fixed const &n)
{
	o << n.toFloat();
	return o;
}

// ----------- Canonical -----------

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	_raw_bits = 0;
}

Fixed::Fixed( int const i)
{
	cout << "Int constructor called" << endl;
	_raw_bits = i << _bits;
}

Fixed::Fixed( float const f)
{
	cout << "Float constructor called" << endl;
	_raw_bits = f;
}

Fixed::Fixed( Fixed const &src)
{
	cout << "Copy constructor called" << endl;
	*this = src;
}

Fixed & Fixed::operator=( Fixed const &n)
{
	cout << "Copy assignement operator called" << endl;
	_raw_bits = n.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}
