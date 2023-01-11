#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	std::vector<int>	_container;
	unsigned int		_capacity;
public:
	Span();
	Span(unsigned int N);
	Span(const Span& obj);
	~Span();

	Span&	operator=(const Span& obj);

	void	addNumber(int value);
	int		shortestSpan();
	int		longestSpan();
	void	fillElems(int n);

	std::vector<int>::iterator getIterByNum(int N)
	{
		return (_container.begin() + N);
	}
	class NoCapacityException : public std::exception
	{
	public:
		const char*	what() const throw()
		{
			return ("Can't set more elements");
		}
	};

	class NoSpanException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Not enough elements for calculate the span");
		}
	};
};

#endif
