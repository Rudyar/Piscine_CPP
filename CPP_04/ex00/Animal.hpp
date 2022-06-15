/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:57:25 by arudy             #+#    #+#             */
/*   Updated: 2022/06/15 19:01:23 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		~Animal();

		Animal	&operator=( Animal const & rhs );
		std::string	getType() const;

	protected:
		std::string	type;
		void	makeSound();

};

std::ostream	&operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */
