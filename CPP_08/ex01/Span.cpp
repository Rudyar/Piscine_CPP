#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _size(0)
{
}

Span::Span(unsigned int N) : _size(N)
{
}

Span::Span( const Span & src ) : _size(src._size)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
		_tab = rhs._tab;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int i)
{
	if (_tab.size() >= getSize())
		throw (std::length_error("Tab is full !"));
	_tab.push_back(i);
	std::cout << "Added " << i << " to the tab" << std::endl;
}

int	Span::shortestSpan()
{
	int ret = 2147483647;
	std::sort (_tab.begin(), _tab.end());
	// for (int i = 1; i < _tab.size(); i++)
	// {
	// 	if ()
	// }

	return 0;
}

int	Span::longestSpan()
{
	int	max = *std::max_element(_tab.begin(), _tab.end());
	int	min = *std::min_element(_tab.begin(), _tab.end());
	return max- min;
}

void	Span::displayTab()
{
	std::cout << "---- Display Tab ----" << std::endl;
	std::vector <int>::iterator it;
	for (it = _tab.begin(); it != _tab.end(); it++)
		std::cout << "Value : " << *it << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
unsigned int Span::getSize() const
{
	return _size;
}

/* ************************************************************************** */
