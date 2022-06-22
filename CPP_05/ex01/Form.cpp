/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:37:00 by arudy             #+#    #+#             */
/*   Updated: 2022/06/22 15:20:27 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("No title"), _sign_grade(150), _exec_grade(150), _signed(false)
{
}

Form::Form(std::string const name, int sign_grade, int exec_grade) : _name(name), _sign_grade(setSignGrade(sign_grade)),
_exec_grade(setExecGrade(exec_grade)), _signed(false)
{
}

Form::Form( const Form & src ) : _name(src._name),  _sign_grade(src._sign_grade), _exec_grade(src._exec_grade)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &	Form::operator=( Form const & rhs )
{
	if (this == &rhs)
		return *this;
	_signed = rhs._signed;
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Form const & i )
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

void	Form::beSigned(Bureaucrat & bureaucrat)
{
	if (_signed == true)
		throw Form::AlreadySignedExeption();
	if (bureaucrat.getGrade() <= _sign_grade)
		_signed = true;
	else
		throw Form::GradeTooLowExeption();
}

int	Form::setSignGrade(int i)
{
	if (i < 1)
		throw Form::GradeTooLowExeption();
	else if (i > 150)
		throw Form::GradeTooHighExeption();
	return i;
}

int	Form::setExecGrade(int i)
{
	if (i < 1)
		throw Form::GradeTooLowExeption();
	else if (i > 150)
		throw Form::GradeTooHighExeption();
	return i;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Form::getName() const
{
	return _name;
}

bool	Form::getSigned() const
{
	return _signed;
}

int		Form::getSignGrade() const
{
	return _sign_grade;
}

int		Form::getExecGrade() const
{
	return _exec_grade;
}

/*
** --------------------------------- EXCEPTION ---------------------------------
*/

const char*	Form::GradeTooHighExeption::what() const throw()
{
	return ("Form grade too high !");
}

const char*	Form::GradeTooLowExeption::what() const throw()
{
	return ("Form grade too low !");
}

const char*	Form::AlreadySignedExeption::what() const throw()
{
	return ("Form is already signed !");
}

/* ************************************************************************** */
