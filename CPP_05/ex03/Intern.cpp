/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:53:13 by arudy             #+#    #+#             */
/*   Updated: 2022/06/23 11:15:50 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &		Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm	*Intern::makeForm(std::string form_name, std::string form_target)
{
	std::string list[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon",
	};
	AForm *(Intern::*func[3])(std::string) = {&Intern::newShrubberyCreation, &Intern::newRobotomyRequest, &Intern::newPresidentialPardon};
	for (int i = 0; i < 3; i++)
	{
		if (form_name == list[i])
		{
			std::cout << "Intern creates " << form_name << " form" << std::endl;
			return (this->*func[i])(form_target);
		}
	}
	throw AForm::FormNotFoundExeption();
	return NULL;
}

AForm	*Intern::newShrubberyCreation(std::string form_target)
{
	return new ShrubberyCreationForm(form_target);
}

AForm	*Intern::newRobotomyRequest(std::string form_taget)
{
	return new RobotomyRequestForm(form_taget);
}

AForm	*Intern::newPresidentialPardon(std::string form_taget)
{
	return new PresidentialPardonForm(form_taget);
}

/* ************************************************************************** */
