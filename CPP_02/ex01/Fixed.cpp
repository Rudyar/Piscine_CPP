/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:45:43 by arudy             #+#    #+#             */
/*   Updated: 2022/06/12 11:20:34 by arudy            ###   ########.fr       */
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
	return _raw_bits / (float)(1 << _bits);
}

int	Fixed::toInt( void ) const
{
	return (int)_raw_bits >> _bits;
}

ostream	&operator<<(ostream &o, Fixed const &n)
{
	o << n.toFloat();
	return o;
}

// ----------- Canon -----------

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
	_raw_bits = roundf(f * (1 << _bits));
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
