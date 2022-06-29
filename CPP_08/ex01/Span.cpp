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


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
unsigned int const Span::getSize() const
{
	return _size;
}

/* ************************************************************************** */
