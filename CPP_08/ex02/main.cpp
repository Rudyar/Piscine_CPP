/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:02:59 by arudy             #+#    #+#             */
/*   Updated: 2022/07/01 15:49:57 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "---- Test My Mutant Stack ----" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		std::cout << "---- Iterator ----" << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::cout << "---- Reverse iterator ----" << std::endl;
		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend();
		++rit;
		--rit;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}

		std::cout << "---- Const iterator ----" << std::endl;
		MutantStack<int>::const_iterator cit = mstack.begin();
		MutantStack<int>::const_iterator cite = mstack.end();
		++cit;
		--cit;
		while (cit != cite)
		{
			std::cout << *cit << std::endl;
			++cit;
		}

		std::cout << "---- Const reverse iterator ----" << std::endl;
		MutantStack<int>::const_reverse_iterator crit = mstack.rbegin();
		MutantStack<int>::const_reverse_iterator crite = mstack.rend();
		++crit;
		--crit;
		while (crit != crite)
		{
			std::cout << *crit << std::endl;
			++crit;
		}
		std::stack<int> s(mstack);
	}

	std::cout << std::endl << std::endl << "---- Test with List container ----" << std::endl;
	{
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);

		std::cout << "---- Iterator ----" << std::endl;
		std::list <int>::iterator it = mstack.begin();
		std::list <int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::cout << "---- Reverse iterator ----" << std::endl;
		std::list <int>::reverse_iterator rit = mstack.rbegin();
		std::list <int>::reverse_iterator rite = mstack.rend();
		++rit;
		--rit;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}

		std::cout << "---- Const iterator ----" << std::endl;
		std::list<int>::const_iterator cit = mstack.begin();
		std::list<int>::const_iterator cite = mstack.end();
		++cit;
		--cit;
		while (cit != cite)
		{
			std::cout << *cit << std::endl;
			++cit;
		}

		std::cout << "---- Const reverse iterator ----" << std::endl;
		std::list <int>::const_reverse_iterator crit = mstack.rbegin();
		std::list <int>::const_reverse_iterator crite = mstack.rend();
		++crit;
		--crit;
		while (crit != crite)
		{
			std::cout << *crit << std::endl;
			++crit;
		}
		std::list<int> s(mstack);
	}
	return 0;
}
