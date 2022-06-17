/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:57:25 by arudy             #+#    #+#             */
/*   Updated: 2022/06/17 11:40:36 by arudy            ###   ########.fr       */
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
		virtual ~Animal();

		Animal	&operator=( Animal const & rhs );
		std::string	getType() const;
		virtual void	makeSound() const;

	protected:
		std::string	type;

};

std::ostream	&operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */
