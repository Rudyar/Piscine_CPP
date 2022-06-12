/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:43:59 by arudy             #+#    #+#             */
/*   Updated: 2022/06/12 17:51:58 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ));
	Fixed c(42);
	Fixed d(42);
	Fixed const e(12);
	Fixed const f(-9);

	cout << "===== Comp operators ======" << endl << endl;
	cout << (b > c) << " : False" << endl;
	cout << (b < c) << " : True" << endl;
	cout << (c <= d) << " : True" << endl;
	cout << (c >= d) << " : True" << endl;
	cout << (c == d) << " : True" << endl;
	cout << (c != d) << " : False" << endl;

	cout << endl << "===== Artithmetic operators ======" << endl << endl;
	cout << "b = " << b << " | c = " << c << " | d = " << d << endl;
	cout << " c + d = " << (c + d) << endl;
	cout << " c - d = " << (c - d) << endl;
	cout << " c * b = " << (c * b) << endl;
	cout << " c / b = " << (c / b) << endl;

	cout << endl << "===== Increment operators ======" << endl << endl;
	cout << "a = " << a << endl;
	cout << "++a = " << ++a << endl;
	cout << "a = " << a << endl;
	cout << "a++ = " << a++ << endl;
	cout << "a = " << a << endl;

	cout << endl << "===== Decrement operators ======" << endl << endl;
	cout << "a = " << a << endl;
	cout << "--a = " << --a << endl;
	cout << "a = " << a << endl;
	cout << "a-- = " << a-- << endl;
	cout << "a = " << a << endl;

	cout << endl << "===== Decrement operators ======" << endl << endl;
	cout << "a = " << a << " | b = " << b << " | e = " << e;
	cout << " | f = " << f << endl;
	cout << "Max between a & b : " << Fixed::max( a, b )  << endl;
	cout << "Min between a & b : " << Fixed::min( a, b )  << endl;
	cout << "Max between e & f const : " << Fixed::max( e, f )  << endl;
	cout << "Min between e & f const : " << Fixed::min( e, f )  << endl;

	return 0;
}

// int main(void)
// {
// 	Fixed a;
// 	Fixed b( Fixed( 5.05f ) * Fixed( 2 ));

// 	cout << a << endl;
// 	cout << ++a << endl;
// 	cout << a << endl;
// 	cout << a++ << endl;
// 	cout << a << endl;

// 	cout << b << endl;
// 	cout << Fixed::max( a, b )  << endl;

// 	return 0;
// }

