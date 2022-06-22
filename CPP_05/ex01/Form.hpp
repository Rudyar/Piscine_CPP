/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:36:52 by arudy             #+#    #+#             */
/*   Updated: 2022/06/22 15:05:30 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:

		Form();
		Form(std::string const name, int sign_grade, int exec_grade);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );
		std::string	getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		int			setSignGrade(int i);
		int			setExecGrade(int i);
		void		beSigned(Bureaucrat & bureaucrat);

		class GradeTooHighExeption : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		class GradeTooLowExeption : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};
		class AlreadySignedExeption : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

	private:
		std::string const	_name;
		int			const	_sign_grade;
		int			const	_exec_grade;
		bool				_signed;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
