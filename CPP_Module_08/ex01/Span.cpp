#include "Span.hpp"

Span::Span()
	: _capacity(0)
{ }
Span::Span(unsigned int N)
	: _capacity(N)
{ };
Span::Span(const Span& obj)
{
	if (*this != obj)
		this->_container = obj._container;
}
Span::~Span()
{ };