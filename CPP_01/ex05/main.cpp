/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:54:28 by arudy             #+#    #+#             */
/*   Updated: 2022/06/10 17:29:01 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;

	harl.complain("debug");
	cout << endl;
	harl.complain("info");
	cout << endl;
	harl.complain("warning");
	cout << endl;
	harl.complain("error");
	cout << endl;
	harl.complain("coucou");
	return (0);
}
