/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:26:10 by arudy             #+#    #+#             */
/*   Updated: 2022/06/22 19:36:35 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : AForm("President Pardon Form", 25, 5), _target("No target")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("President Pardon Form", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : AForm("President Pardon Form", 25, 5)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if (this == &rhs)
		return *this;
	_target = rhs.getTarget();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw AForm::NotSignedExeption();
	else if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowExeption();
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	std::cout << this->getTarget() << " is forgiven by Zaphod Beeblebrox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string PresidentialPardonForm::getTarget() const
{
	return _target;
}

/* ************************************************************************** */
