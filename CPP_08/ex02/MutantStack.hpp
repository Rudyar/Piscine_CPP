/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:03:57 by arudy             #+#    #+#             */
/*   Updated: 2022/07/01 15:47:05 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(){}
		MutantStack(const MutantStack &src) {*this = src;}
		~MutantStack(){}
		MutantStack &operator=(const MutantStack &rhs) {this->c = rhs->c; return *this;}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
		reverse_iterator rbegin() {return this->c.rbegin();}
		reverse_iterator rend() {return this->c.rend();}
		const_iterator begin() const {return this->c.begin();}
		const_iterator end() const {return this->c.end();}
		const_reverse_iterator rbegin() const {return this->c.rbegin();}
		const_reverse_iterator rend() const {return this->c.rend();}
};

#endif

// const_iterator c'est utile quand on veut seulement lire dans notre container et pas modifier la valeur.
// c = au container sous jacent, dans ce cas là, std::stack herite de std::deque qui est un autre container
// sur lequel il est possible d'iterer.
// typedef defini un nouveau type, typename dit au compilo que le nom qui suit est un type et non pas une declaration de modele
