/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:38:46 by arudy             #+#    #+#             */
/*   Updated: 2022/06/22 19:43:39 by arudy            ###   ########.fr       */
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

ShrubberyCreationForm &		ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if (this == &rhs)
		return *this;
	_target = rhs.getTarget();
	return *this;
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
	std::string	filename = this->getTarget() + "_shrubbery";
	std::ofstream file;
	file.open(filename.c_str());
	if (!file)
	{
		std::cerr << "Can't open file : " << filename << std::endl;
		return ;
	}
	std::string buff = "       _-_\n";
	buff += "    /~~   ~~\\\n";
	buff += " /~~         ~~\\\n";
	buff += "{               }\n";
	buff += " \\  _-     -_  /\n";
	buff += "   ~  \\\\ //  ~\n";
	buff += "_- -   | | _- _\n";
	buff += "  _ -  | |   -_\n";
	buff += "......// \\\\......_\n";
	file << buff;
	file.close();
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ShrubberyCreationForm::getTarget() const
{
	return _target;
}

/* ************************************************************************** */
