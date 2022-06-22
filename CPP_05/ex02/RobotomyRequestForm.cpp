/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:49:58 by arudy             #+#    #+#             */
/*   Updated: 2022/06/22 19:23:53 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Form", 72, 45), _target("No target")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Form", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : AForm("Robotomy Form", 72, 45)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if (this == &rhs)
		return *this;
	_target = rhs.getTarget();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw AForm::NotSignedExeption();
	else if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowExeption();
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	srand(time(NULL));
	if (rand() % 2)
	{
		std::cout << "Brrrrrrrrrrrrrrrrrrrrrrrr" << std::endl;
		std::cout << _target << " is robotomised with success" << std::endl;
	}
	else
		std::cout << "Robotomisation failed..." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	RobotomyRequestForm::getTarget() const
{
	return _target;
}

/* ************************************************************************** */
