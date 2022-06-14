/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:21:37 by arudy             #+#    #+#             */
/*   Updated: 2022/06/14 12:30:42 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
using namespace std;

class FragTrap : public ClapTrap
{

	public:
		FragTrap();
		FragTrap(string name);
		FragTrap(FragTrap const & src);
		~FragTrap();
		FragTrap	&operator=(FragTrap const &a);
		void		highFivesGuys(void);
};

#endif /* ******************************************************** FRAGTRAP_H */
