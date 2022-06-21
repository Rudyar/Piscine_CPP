/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:57:11 by arudy             #+#    #+#             */
/*   Updated: 2022/06/21 15:23:09 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{

	public:

		Cat();
		Cat( Cat const & src );
		~Cat();

		Cat &				operator=( Cat const & rhs );
		 void		makeSound() const;
		 std::string	getIdea(int i) const;
		 void		setIdea(int i, std::string str);

	private:
		Brain* _brain;
};

#endif /* ************************************************************* CAT_H */
