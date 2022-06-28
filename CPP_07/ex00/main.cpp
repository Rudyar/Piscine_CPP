/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:13:57 by arudy             #+#    #+#             */
/*   Updated: 2022/06/28 16:36:53 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int
main( void ) {
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min ( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max ( a, b ) = " << ::max( a, b ) << std::endl << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min ( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max ( c, d ) = " << ::max( c, d ) << std::endl << std::endl;

	float e = 2.42;
	float f = 3.42;

	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min ( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max ( e, f ) = " << ::max( e, f ) << std::endl;

	return 0;
}
