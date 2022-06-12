/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:44:38 by arudy             #+#    #+#             */
/*   Updated: 2022/06/11 18:39:50 by arudy            ###   ########.fr       */
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
		Fixed &operator=( Fixed const &n);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat(  void ) const;
		int		toInt( void ) const;
};

ostream	&operator<<( ostream &o, Fixed const &n);

#endif