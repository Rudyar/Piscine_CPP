/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:12:04 by arudy             #+#    #+#             */
/*   Updated: 2022/06/28 18:24:57 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template<typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array<T>()
		{
			std::cout << "Default constructor called" << std::endl;
			_array = NULL;
			_size = 0;
		};
		Array<T>(unsigned int n)
		{
			std::cout << "With size constructor called" << std::endl;
			if (n < 0)
				throw(std::length_error("Need a size >= 0"));
			_size = n;
			_array = new T[n];
		};
		Array<T>(Array<T> const & src)
		{
			std::cout << "Copy constructor called" << std::endl;
			*this = src;
		}
		T &	operator=(T const & rhs)
		{
			std::cout << "Assignement operator called" << std::endl;
			if (*this == rhs)
				return *this;
			if (this.size() != 0)
				delete [] _array;
			_size = rhs._size();
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = _array[i];
			return *this;
		}
		T &	operator[](unsigned int const i)
		{
			if (i < 0 || i >= _size)
				throw(std::out_of_range("Invalid index"));
			return _array[i];
		}
		~Array<T>()
		{
			std::cout << "Destructor called" << std::endl;
			delete [] _array;
		};
		unsigned int size()
		{
			return _size;
		}
};

#endif
