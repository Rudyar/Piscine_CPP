/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:45:43 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 16:32:42 by arudy            ###   ########.fr       */
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

std::ostream	&operator<<(std::ostream &o, Fixed const &n)
{
	o << n.toFloat();
	return o;
}

// ----------- Canon -----------

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_raw_bits = 0;
}

Fixed::Fixed( int const i)
{
	std::cout << "Int constructor called" << std::endl;
	_raw_bits = i << _bits;
}

Fixed::Fixed( float const f)
{
	std::cout << "Float constructor called" << std::endl;
	_raw_bits = roundf(f * (1 << _bits));
}

Fixed::Fixed( Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=( Fixed const &n)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_raw_bits = n.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
