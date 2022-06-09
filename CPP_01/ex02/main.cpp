/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:06:37 by arudy             #+#    #+#             */
/*   Updated: 2022/06/09 16:13:28 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str = "HI THIS IS BRAIN";
	string *ptr = &str;
	string &ref = str;

	cout << "Memory address of str : " << &str << endl;
	cout << "Memory address of ptr : " << ptr << endl;
	cout << "Memory address of ref : " << &ref << endl;
	cout << "------------------------" << endl;
	cout << "Value of str : " << str << endl;
	cout << "Value of ptr : " << *ptr << endl;
	cout << "Value of ref : " << ref << endl;
	return (0);
}
