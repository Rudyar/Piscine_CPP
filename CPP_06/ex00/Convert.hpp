/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:35:11 by arudy             #+#    #+#             */
/*   Updated: 2022/06/24 14:16:18 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <iomanip>
#include <string>
#include <limits.h>
#include <stdlib.h>

void	convertChar(std::string s, double n);
void	convertInt(std::string s, double n);
void	convertFloat(std::string s, double n);
void	convertDouble(std::string s, double n);

#endif
