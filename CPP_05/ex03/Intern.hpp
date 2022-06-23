/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:53:16 by arudy             #+#    #+#             */
/*   Updated: 2022/06/23 11:03:00 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );
		AForm			*makeForm(std::string form_name, std::string form_target);
		AForm			*newShrubberyCreation(std::string form_target);
		AForm			*newRobotomyRequest(std::string form_target);
		AForm			*newPresidentialPardon(std::string form_target);
};

#endif /* ********************************************************** INTERN_H */
