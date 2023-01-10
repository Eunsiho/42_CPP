#include "Span.hpp"
#include <iostream>
#include <cstdlib>

int main(void)
{
	Span mySpan(10);

	try
	{
		for (unsigned int i = 0; i < 10; i++)
			mySpan.addNumber(std::rand() % 100);
		std::cout << "Shortest span: " << mySpan.shortestSpan() << std::endl;
		std::cout << "Longest span: " << mySpan.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
