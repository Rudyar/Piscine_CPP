/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:57:25 by arudy             #+#    #+#             */
/*   Updated: 2022/06/20 19:02:24 by arudy            ###   ########.fr       */
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

		Animal			&operator=( Animal const & rhs );
		std::string				getType() const;
		virtual void			makeSound() const;
		// virtual std::string		getIdea(int i) const;
		// virtual void			setIdea(int i, std::string str);

	protected:
		std::string	type;

};

#endif /* ********************************************************** ANIMAL_H */
