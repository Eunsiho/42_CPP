#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void printElem(const T& a)
{
	std::cout << a << std::endl;
}

template <typename T>
void iter(T* addr, size_t len, void (*ft)(const T& a))
{
	for (size_t i = 0; i < len; ++i)
		ft(addr[i]);
}

#endif
