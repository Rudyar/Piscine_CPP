/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:57:37 by arudy             #+#    #+#             */
/*   Updated: 2022/06/17 14:55:13 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog( Dog const & src );
		~Dog();

		Dog &	operator=( Dog const & rhs );
		void	makeSound() const;

};

#endif /* ************************************************************* DOG_H */
