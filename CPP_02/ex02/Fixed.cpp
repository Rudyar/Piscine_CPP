/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:45:43 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 16:39:11 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ----------- Comp operators -----------

bool	Fixed::operator>( Fixed const &n ) const
{
	if (_raw_bits > n.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<( Fixed const &n ) const
{
	if (_raw_bits < n.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=( Fixed const &n ) const
{
	if (_raw_bits >= n.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=( Fixed const &n ) const
{
	if (_raw_bits <= n.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==( Fixed const &n ) const
{
	if (_raw_bits == n.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=( Fixed const &n ) const
{
	if (_raw_bits != n.getRawBits())
		return true;
	return false;
}

// ----------- Arithmetic operators -----------


Fixed	Fixed::operator+( Fixed const &n) const
{
	Fixed tmp;

	tmp.setRawBits(_raw_bits + n.getRawBits());
	return tmp;
}

Fixed	Fixed::operator-( Fixed const &n) const
{
	Fixed tmp;

	tmp.setRawBits(_raw_bits - n.getRawBits());
	return tmp;
}

Fixed	Fixed::operator*( Fixed const &n) const
{
	Fixed tmp;

	tmp.setRawBits(_raw_bits * n.getRawBits() >> _bits);
	return tmp;
}

Fixed	Fixed::operator/( Fixed const &n) const
{
	Fixed tmp;

	tmp.setRawBits((_raw_bits << _bits) / n.getRawBits());
	return tmp;
}

// ----------- Increment & decrement operators -----------

Fixed	&Fixed::operator++( void )
{
	_raw_bits++;
	return *this;
}

Fixed	Fixed::operator++( int )
{
	Fixed tmp = *this;

	++*this;
	return tmp;
}

Fixed	&Fixed::operator--( void )
{
	_raw_bits--;
	return *this;
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp = *this;

	--*this;
	return tmp;
}


// ----------- Functions -----------


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

Fixed	&Fixed::min( Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed const	&Fixed::min( Fixed const &a, Fixed const &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed	&Fixed::max( Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

Fixed const	&Fixed::max( Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	return b;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &n)
{
	o << n.toFloat();
	return o;
}

// ----------- Canon -----------

Fixed::Fixed()
{
	_raw_bits = 0;
}

Fixed::Fixed( int const i)
{
	_raw_bits = (int)i << _bits;
}

Fixed::Fixed( float const f)
{
	_raw_bits = (int)roundf(f * (1 << _bits));
}

Fixed::Fixed( Fixed const &src)
{
	*this = src;
}

Fixed & Fixed::operator=( Fixed const &n)
{
	_raw_bits = n.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
}

// ----------- Doc -----------
// https://docs.microsoft.com/en-us/cpp/cpp/increment-and-decrement-operator-overloading-cpp?view=msvc-170
// https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
