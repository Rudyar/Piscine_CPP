/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:36:52 by arudy             #+#    #+#             */
/*   Updated: 2022/06/22 16:10:04 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:

		AForm();
		AForm(std::string const name, int sign_grade, int exec_grade);
		AForm( AForm const & src );
		~AForm();

		AForm &			operator=( AForm const & rhs );
		std::string		getName() const;
		bool			getSigned() const;
		int				getSignGrade() const;
		int				getExecGrade() const;
		int				setSignGrade(int i);
		int				setExecGrade(int i);
		void			beSigned(Bureaucrat & bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;

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

		class NotSignedExeption : public std::exception
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

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ AFORM_H */
