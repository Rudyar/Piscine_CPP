/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:30:43 by arudy             #+#    #+#             */
/*   Updated: 2022/06/27 11:39:49 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdint.h>

typedef struct s_data
{
	std::string	name;
	int			value;
} Data;

uintptr_t	serialize(Data* ptr);
Data*	deserialize(uintptr_t raw);
