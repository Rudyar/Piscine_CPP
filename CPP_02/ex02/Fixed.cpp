/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:45:43 by arudy             #+#    #+#             */
/*   Updated: 2022/06/12 10:05:51 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ----------- Comp operators -----------

bool	Fixed::operator>( Fixed const &n ) const
{
	if (_raw_bits > n._raw_bits)
		return true;
	return false;
}

bool	Fixed::operator<( Fixed const &n ) const
{
	if (_raw_bits < n._raw_bits)
		return true;
	return false;
}

bool	Fixed::operator>=( Fixed const &n ) const
{
	if (_raw_bits >= n._raw_bits)
		return true;
	return false;
}

bool	Fixed::operator<=( Fixed const &n ) const
{
	if (_raw_bits <= n._raw_bits)
		return true;
	return false;
}

bool	Fixed::operator==( Fixed const &n ) const
{
	if (_raw_bits == n._raw_bits)
		return true;
	return false;
}

bool	Fixed::operator!=( Fixed const &n ) const
{
	if (_raw_bits != n._raw_bits)
		return true;
	return false;
}

// ----------- Arithmetic operators -----------


Fixed	Fixed::operator+( Fixed const &n) const
{
	Fixed tmp;

	tmp.setRawBits(_raw_bits + n._raw_bits);
	return tmp;
}

Fixed	Fixed::operator-( Fixed const &n) const
{
	Fixed tmp;

	tmp.setRawBits(_raw_bits - n._raw_bits);
	return tmp;
}

Fixed	Fixed::operator*( Fixed const &n) const
{
	Fixed tmp;

	tmp.setRawBits(_raw_bits * n._raw_bits);
	return tmp;
}

Fixed	Fixed::operator/( Fixed const &n) const
{
	Fixed tmp;

	tmp.setRawBits(_raw_bits / n._raw_bits);
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
	return (roundf(_raw_bits) / (1 << _bits));
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
	_raw_bits = 0;
}

Fixed::Fixed( int const i)
{
	_raw_bits = i << _bits;
}

Fixed::Fixed( float const f)
{
	_raw_bits = roundf(f * (1 << _bits));
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
