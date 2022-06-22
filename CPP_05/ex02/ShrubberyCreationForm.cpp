/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:38:46 by arudy             #+#    #+#             */
/*   Updated: 2022/06/22 17:32:44 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shruberry Form", 145, 137), _target("No target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shruberry Form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : AForm("Shruberry Form", 145, 137)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if (this == &rhs)
		return *this;
	_target = rhs.getTarget();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	(void)i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw AForm::NotSignedExeption();
	else if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowExeption();
	// create fd
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ShrubberyCreationForm::getTarget() const
{
	return _target;
}

/* ************************************************************************** */
