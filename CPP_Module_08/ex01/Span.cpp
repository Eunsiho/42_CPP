#include "Span.hpp"

Span::Span()
	: _capacity(0)
{ }
Span::Span(unsigned int N)
	: _capacity(N)
{ }
Span::Span(const Span& obj)
	: _container(obj._container), _capacity(obj._capacity)
{ }
Span::~Span()
{ }

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

int Span::shortestSpan()
{
	if (_container.size() <= 1)
		throw (NoSpanException());
	std::sort(_container.begin(), _container.end());
	int	shortest = _container[1] - _container[0];
	for (size_t i = 1; i < _container.size(); ++i)
		shortest = std::min(shortest, _container[i] - _container[i - 1]);
	return (shortest);
}

int Span::longestSpan()
{
	if (_container.size() <= 1)
		throw (NoSpanException());
	std::sort(_container.begin(), _container.end());
	return (_container[_container.size() - 1] - _container[0]);
}

void	Span::fillElems(int n)
{
	if (n + _container.size() > _capacity)
		throw NoCapacityException();
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
		addNumber(rand());
}
