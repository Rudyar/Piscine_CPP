/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 11:56:37 by arudy             #+#    #+#             */
/*   Updated: 2022/06/29 14:27:46 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <vector>

template<typename T>
typename T::const_iterator	easyfind(T tab, int i)
{
	typename T::const_iterator it;

	it = std::find(tab.begin(), tab.end(), i);
	if (it != tab.end())
		return (it);
	throw (std::out_of_range("Element not found in tab"));
}

#endif
