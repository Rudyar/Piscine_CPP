/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:51:11 by arudy             #+#    #+#             */
/*   Updated: 2022/06/27 14:33:34 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

/*
	Dynamic cast car je veux faire des down casts en securité, et ensuite tester
	au run time le type de Base que j'ai récup.
*/

Base::~Base()
{
}

Base*	generate(void)
{
	Base *base;

	srand(time(NULL));
	int n = rand() % 3;
	if (n == 1)
		base = new A();
	else if (n == 2)
		base = new B();
	else
		base = new C();
	return base;
}

void	identify(Base* p)
{
	std::cout << "---- Find type by pointer function ----" << std::endl << std::endl;
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if (a == NULL)
		std::cout << "Conversion to A class NOT OK" << std::endl;
	else
		std::cout << "----> Base is a A class type" << std::endl;
	if (b == NULL)
		std::cout << "Conversion to B class NOT OK" << std::endl;
	else
		std::cout << "----> Base is a B class type" << std::endl;
	if (c == NULL)
		std::cout << "Conversion to C class NOT OK" << std::endl;
	else
		std::cout << "----> Base is a C class type" << std::endl;
}

void	identify(Base& p)
{
	std::cout << std::endl << "---- Find type by reference function ----" << std::endl << std::endl;
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "----> Base is a A class type" << std::endl;
		static_cast<void>(a);
	}
	catch(...)
	{
		std::cerr << "Coversion to A class NOT OK" << std::endl;
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "----> Base is a B class type" << std::endl;
		static_cast<void>(b);
	}
	catch(...)
	{
		std::cerr << "Coversion to B class NOT OK" << std::endl;
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "----> Base is a C class type" << std::endl;
		static_cast<void>(c);
	}
	catch(...)
	{
		std::cerr << "Coversion to C class NOT OK" << std::endl;
	}
}
