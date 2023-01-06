#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
	unsigned int	_size;
	T*				_data;
public:
	Array() : _size(0)
	{
		_data = new T[0];
	}
	Array(unsigned int n) : _size(n)
	{
		_data = new T[n];
		for (unsigned int i = 0; i < n; ++i)
			_data[i] = T();
	}
	Array(const Array& obj) : _size(obj._size)
	{
		_data = new T[obj._size];
		for (unsigned int i = 0; i < obj._size; ++i)
			_data[i] = obj._data[i];
	}

	Array& operator=(const Array& obj)
	{
		if (this != &obj)
		{
			delete[] _data;
			_size = obj._size;
			_data = new T[obj._size];
			for (unsigned int i = 0; i < obj._size; ++i)
				_data[i] = obj._data[i];
		}
		return (*this);
	}

	T&				operator[](unsigned int index)
	{
		if (index >= _size)
			throw std::out_of_range("Array index is out of bound");
		return (_data[index]);
	}
	const T&		operator[](unsigned int index) const
	{
		if (index >= _size)
			throw std::out_of_range("Array index is out of bound");
		return (_data[index]);
	}

	unsigned int	size() const
	{
		return (_size);
	}
	~Array()
	{
		delete []_data;
	}
};

#endif
