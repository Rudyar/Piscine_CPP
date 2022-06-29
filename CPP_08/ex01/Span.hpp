#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{
	public:

		Span();
		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );
		unsigned int const	getSize() const;

	private:
		unsigned int const	_size;
		std::vector<int>	_tab;
};


#endif /* ************************************************************ SPAN_H */
