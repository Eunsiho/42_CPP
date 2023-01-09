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
};

#endif
