/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:40:06 by arudy             #+#    #+#             */
/*   Updated: 2022/06/28 16:56:21 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void	function(T x)
{
	std::cout << "x = " << x << std::endl;
}

template<typename T>
void	iter(T *tab, size_t size, void(*func)(T const &arg))
{
	for (size_t i = 0; i < size; i++)
		(*func)(tab[i]);
}

#endif
