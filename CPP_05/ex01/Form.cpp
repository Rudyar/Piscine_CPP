/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:37:00 by arudy             #+#    #+#             */
/*   Updated: 2022/06/22 12:12:29 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("Unknow"), _signed(0), _sign_grade(150), _exec_grade(150)
{
}

Form::Form(std::string const name, int sign_grade, int exec_grade) : _name(name)
{
	try
	{
		// signgrade & execgrade check
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}

Form::Form( const Form & src ) : _name(src._name)
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

}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << ", form sign grade : " << i.getSignGrade() << ", form exec garde : " << i.getExecGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::beSigned(Bureaucrat const & bureaucrat)
{
	
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

/* ************************************************************************** */
