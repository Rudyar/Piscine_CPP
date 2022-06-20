/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:57:11 by arudy             #+#    #+#             */
/*   Updated: 2022/06/20 18:57:17 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		~Cat();

		Cat &				operator=( Cat const & rhs );
		virtual void		makeSound() const;
		virtual std::string	getIdea(int i) const;
		virtual void		setIdea(int i, std::string str);

	private:
		Brain* _brain;
};

#endif /* ************************************************************* CAT_H */
