#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>
# include <algorithm>

class Span
{
	public:

		Span();
		Span(unsigned int const N);
		Span( Span const & src );
		~Span();

		Span &				operator=( Span const & rhs );
		unsigned int		getSize() const;
		void				displayTab();
		void				addNumber(int i);
		void				fillSpan(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int					shortestSpan();
		int					longestSpan();

	private:
		unsigned int const	_size;
		std::vector<int>	_tab;
};

#endif /* ************************************************************ SPAN_H */
