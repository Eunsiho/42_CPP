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

	class NoCapacityException : public std::exception
	{
	public :
		const char*	what() const throw();
	}
};

#endif
