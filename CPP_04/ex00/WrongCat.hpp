/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:42:48 by arudy             #+#    #+#             */
/*   Updated: 2022/06/21 15:54:40 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		virtual ~WrongCat();

		WrongCat &	operator=( WrongCat const & rhs );
		virtual void		makeSound() const;

};

#endif /* ******************************************************** WRONGCAT_H */
