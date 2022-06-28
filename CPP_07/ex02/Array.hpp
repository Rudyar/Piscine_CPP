/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:12:04 by arudy             #+#    #+#             */
/*   Updated: 2022/06/28 20:12:41 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
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
			if (n < 1)
				throw(std::length_error("Need a size > 0"));
			_size = n;
			_array = new T[n];
		};

		Array<T>(Array<T> const & src)
		{
			_size = 0;
			_array = NULL;
			*this = src;
		}

		~Array<T>()
		{
			std::cout << "Destructor called" << std::endl;
			if (_array)
				delete [] _array;
		};

		Array<T> &	operator=(Array<T> const & rhs)
		{
			std::cout << "Assignement operator called" << std::endl;
			if (this != &rhs)
			{
				if (_array)
					delete [] _array;
				_size = rhs.size();
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = rhs._array[i];
			}
			return *this;
		}

		T &	operator[](unsigned int const i)
		{
			if (i < 0 || i >= _size)
				throw(std::out_of_range("Invalid index"));
			return _array[i];
		}

		unsigned int size() const
		{
			return _size;
		}
};

#endif
