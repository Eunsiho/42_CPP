#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class CantFindException : public std::exception
{
	public :
		const char* what() const throw()
		{
			return ("value not found");
		};
};

template <typename T>
typename T::iterator easyfind(T& container, int x)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), x);
	if (iter == container.end())
		throw CantFindException();
	return (iter);
}

#endif
