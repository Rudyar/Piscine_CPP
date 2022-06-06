/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:33:30 by arudy             #+#    #+#             */
/*   Updated: 2022/06/06 14:11:11 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	int			i;
	size_t		j;
	std::string	str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (i = 1; i < ac; i++)
		{
			str = av[i];
			for (j = 0; j < str.size(); j++)
				std::cout << (char)std::toupper(av[i][j]);
		}
	}
	std::cout << std::endl;
	return (0);
}
