/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:53:16 by arudy             #+#    #+#             */
/*   Updated: 2022/06/22 19:57:11 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <stdexcept>
# include <string>
# include <AForm.hpp>

class Intern
{
	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );
		AForm			*makeForm(std::string form_name, std::string form_target);

		class FormNotFoundExeption : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

	private:

};

#endif /* ********************************************************** INTERN_H */
