/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:37:00 by arudy             #+#    #+#             */
/*   Updated: 2022/06/22 16:11:03 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm() : _name("No title"), _sign_grade(150), _exec_grade(150), _signed(false)
{
}

AForm::AForm(std::string const name, int sign_grade, int exec_grade) : _name(name), _sign_grade(setSignGrade(sign_grade)),
_exec_grade(setExecGrade(exec_grade)), _signed(false)
{
}

AForm::AForm( const AForm & src ) : _name(src._name),  _sign_grade(src._sign_grade), _exec_grade(src._exec_grade)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &	AForm::operator=( AForm const & rhs )
{
	if (this == &rhs)
		return *this;
	_signed = rhs._signed;
	return *this;
}

std::ostream &	operator<<( std::ostream & o, AForm const & i )
{
	o << i.getName() << ", form sign grade : " << i.getSignGrade() << ", form exec grade : " << i.getExecGrade();
	if (i.getSigned() == true)
		o << ", is signed" << std::endl;
	else
		o << ", is not signed" << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	AForm::beSigned(Bureaucrat & bureaucrat)
{
	if (_signed == true)
		throw AForm::AlreadySignedExeption();
	if (bureaucrat.getGrade() <= _sign_grade)
		_signed = true;
	else
		throw AForm::GradeTooLowExeption();
}

int	AForm::setSignGrade(int i)
{
	if (i < 1)
		throw AForm::GradeTooLowExeption();
	else if (i > 150)
		throw AForm::GradeTooHighExeption();
	return i;
}

int	AForm::setExecGrade(int i)
{
	if (i < 1)
		throw AForm::GradeTooLowExeption();
	else if (i > 150)
		throw AForm::GradeTooHighExeption();
	return i;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	AForm::getName() const
{
	return _name;
}

bool	AForm::getSigned() const
{
	return _signed;
}

int		AForm::getSignGrade() const
{
	return _sign_grade;
}

int		AForm::getExecGrade() const
{
	return _exec_grade;
}

/*
** --------------------------------- EXCEPTION ---------------------------------
*/

const char*	AForm::GradeTooHighExeption::what() const throw()
{
	return ("Form grade too high !");
}

const char*	AForm::GradeTooLowExeption::what() const throw()
{
	return ("Form grade too low !");
}

const char*	AForm::AlreadySignedExeption::what() const throw()
{
	return ("Form is already signed !");
}

const char*	AForm::NotSignedExeption::what() const throw()
{
	return ("Form is not signed !");
}

const char	*AForm::FormNotFoundExeption::what() const throw()
{
	return ("This type of form is not found");
}

/* ************************************************************************** */
