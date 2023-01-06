#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b)
{
	T	temp;
	temp = b;
	b = a;
	a = temp;
}

template <typename T>
const T& min(const T& a, const T& b)
{
	if (a == b)
		return (b);
	return (a < b ? a : b);
}

template <typename T>
const T& max(const T& a, const T& b)
{
	if (a == b)
		return (b);
	return (a > b ? a : b);
}

#endif
