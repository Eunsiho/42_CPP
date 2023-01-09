#include "Span.hpp"

Span::Span()
	: _capacity(0)
{ }
Span::Span(unsigned int N)
	: _capacity(N)
{ };
Span::Span(const Span& obj)
	: _container(obj._container), _capacity(obj._capacity)
{ }
Span::~Span()
{ };

Span& Span::operator=(const Span& obj)
{
	if (this != &obj)
	{
		_capacity = obj._capacity;
		_container = obj._container;
	}
	return (*this);
}

void Span::addNumber(int value)
{
	if (_container.size() >= _capacity)
		throw NoCapacityException();
	_container.push_back(value);
}
