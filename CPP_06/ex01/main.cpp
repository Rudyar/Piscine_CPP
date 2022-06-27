/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:34:42 by arudy             #+#    #+#             */
/*   Updated: 2022/06/27 11:39:28 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int	main(void)
{
	Data		*data = new Data();
	uintptr_t	n = 12;

	data->name = "Paul";
	data->value = 456;

	std::cout << "Addr data : " << &data << std::endl;
	std::cout << "Addr n    : " << &n << std::endl;

	std::cout << std::endl << "SERIALIZATION" << std::endl;
	serialize(data);
	std::cout << "Addr data : " << &data << std::endl;

	std::cout << std::endl << "DESERIALIZATION" << std::endl;
	deserialize(n);
	std::cout << "Addr n    : " << &n << std::endl;

	delete data;
	return 0;
}
