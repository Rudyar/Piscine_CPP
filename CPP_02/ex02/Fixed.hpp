/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:44:38 by arudy             #+#    #+#             */
/*   Updated: 2022/06/12 11:16:57 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Fixed
{
	private:
		int					_raw_bits;
		int const static	_bits = 8;

	public:
		Fixed();
		Fixed(int const i);
		Fixed(float const f);
		Fixed( Fixed const &src);
		~Fixed();
		Fixed	&operator=( Fixed const &n );

		bool	operator>( Fixed const &n ) const;
		bool	operator<( Fixed const &n ) const;
		bool	operator>=( Fixed const &n ) const;
		bool	operator<=( Fixed const &n ) const;
		bool	operator==( Fixed const &n ) const;
		bool	operator!=( Fixed const &n ) const;

		Fixed	operator+( Fixed const &n ) const;
		Fixed	operator-( Fixed const &n ) const;
		Fixed	operator*( Fixed const &n ) const;
		Fixed	operator/( Fixed const &n ) const;

		Fixed	&operator++( void ); // Prefix increment = ++n
		Fixed	operator++( int ); // Postfix increment = n++
		Fixed	&operator--( void ); // Prefix decrement = --n
		Fixed	operator--( int ); // Postfix decrement = n--

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat(  void ) const;
		int		toInt( void ) const;
		static Fixed	&min( Fixed &a, Fixed &b);
		static Fixed	&min( Fixed const &a, Fixed const &b);
		static Fixed	&max( Fixed &a, Fixed &b);
		static Fixed	&max( Fixed const &a, Fixed const &b);
};

ostream	&operator<<( ostream &o, Fixed const &n );

#endif
