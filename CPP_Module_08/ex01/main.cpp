#include "Span.hpp"
#include <iostream>
#include <cstdlib>

int main(void)
{
	Span mySpan(20000);

	try
	{
		mySpan.fillElems(10000);
		std::cout << "Shortest span: " << mySpan.shortestSpan() << std::endl;
		std::cout << "Longest span: " << mySpan.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
