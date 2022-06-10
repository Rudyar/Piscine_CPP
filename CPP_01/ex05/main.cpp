/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:54:28 by arudy             #+#    #+#             */
/*   Updated: 2022/06/10 18:18:10 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;

	harl.complain("DEBUG");
	cout << endl;
	harl.complain("INFO");
	cout << endl;
	harl.complain("WARNING");
	cout << endl;
	harl.complain("ERROR");
	cout << endl;
	harl.complain("coucou");
	return (0);
}
