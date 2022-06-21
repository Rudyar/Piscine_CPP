/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:57:25 by arudy             #+#    #+#             */
/*   Updated: 2022/06/21 15:22:36 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	public:
		AAnimal();
		AAnimal( AAnimal const & src );
		virtual ~AAnimal();

		AAnimal			&operator=( AAnimal const & rhs );
		std::string				getType() const;
		virtual void			makeSound() const = 0;
		virtual std::string		getIdea(int i) const;
		virtual void			setIdea(int i, std::string str);

	protected:
		std::string	type;

};

#endif /* ********************************************************** ANIMAL_H */
