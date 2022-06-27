/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:51:11 by arudy             #+#    #+#             */
/*   Updated: 2022/06/27 12:14:45 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
}

Base*	generate()
{
	srand(time(NULL));
	int n = rand() % 3;
	if (n == 1)
	{
		std::cout << "Genrate class A" << std::endl;
	}
	else if (n == 2)
	{
		std::cout << "Genrate class B" << std::endl;
	}
	else
	{
		std::cout << "Genrate class C" << std::endl;
	}


}

void	identify(Base* p)
{

}

void	identify(Base& p)
{

}
