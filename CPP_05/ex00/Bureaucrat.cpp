/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:09:53 by arudy             #+#    #+#             */
/*   Updated: 2022/06/22 11:22:45 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("Unknow"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		setGrade(grade);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src._name)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if (this == &rhs)
		return *this;
	_grade = rhs.getGrade();
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::incrementGrade()
{
	try
	{
		setGrade(_grade - 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade()
{
	try
	{
		setGrade(_grade + 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Bureaucrat::getName() const
{
	return _name;
}

int	Bureaucrat::getGrade() const
{
	return _grade;
}

void	Bureaucrat::setGrade(int i)
{
	if (i < 1)
		throw Bureaucrat::GradeTooLowExeption();
	else if (i > 150)
		throw Bureaucrat::GradeTooHighExeption();
	_grade = i;
}

/*
** --------------------------------- EXCEPTION ---------------------------------
*/

const char*	Bureaucrat::GradeTooHighExeption::what() const throw()
{
	return ("Can't assign grade, it's too high !");
}

const char*	Bureaucrat::GradeTooLowExeption::what() const throw()
{
	return ("Can't assign grade, it's too low !");
}

/* ************************************************************************** */
