/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:09:56 by arudy             #+#    #+#             */
/*   Updated: 2022/06/21 20:15:44 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
	public:

		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &	operator=( Bureaucrat const & rhs );
		std::string		getName() const;
		int				getGrade() const;
		void			incrementGrade();
		void			decrementGrade();
		void			checkGrade(int i);

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

	private:
		std::string const	_name;
		int					_grade;

};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */
