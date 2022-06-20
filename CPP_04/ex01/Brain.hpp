#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain();
		Brain( Brain const & src );
		~Brain();
		std::string ideas[100];

		Brain &		operator=( Brain const & rhs );

};

#endif /* *********************************************************** BRAIN_H */
