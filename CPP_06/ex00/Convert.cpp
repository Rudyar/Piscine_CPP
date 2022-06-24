/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 09:28:15 by arudy             #+#    #+#             */
/*   Updated: 2022/06/24 10:40:33 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	convertChar(std::string s)
{
	char c = s[0];
	if (isdigit(static_cast<int>(c)))
		c -= 48;
	if (static_cast<int>(c) > 31 && static_cast<int>(c) < 127)
		std::cout << "char : '" << c << "'" << std::endl;
	else
		std::cout << "char : Non Displayable" << std::endl;
	std::cout << "Int : " << static_cast<int>(c) << std::endl;
	std::cout.precision(2);
	std::cout << "Float : " << std::fixed << static_cast<float>(c) << "f" << std::endl;
	std::cout << "Double : " << std::fixed << static_cast<double>(c) << std::endl;
}
