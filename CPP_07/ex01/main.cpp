/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:39:35 by arudy             #+#    #+#             */
/*   Updated: 2022/06/28 17:10:17 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void)
{
	char	str[] = "Salut";
	int		tab[5] = {1, 2, 3, 4, 5};

	iter(str, 5, function);
	std::cout << std::endl;
	iter(tab, 5, function);
	return 0;
}