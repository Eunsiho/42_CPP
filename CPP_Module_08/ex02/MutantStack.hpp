#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack()
	{ };
	MutantStack(const MutantStack& obj)
	{
		*this = obj;
	};
	~MutantStack()
	{ };
	MutantStack& operator=(const MutantStack& obj)
	{
		if (this != &obj)
			this->c = obj.c;
		return *this;
	};

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
	const_iterator cbegin()
	{
		return (this->c.begin());
	}
	const_iterator cend()
	{
		return (this->c.end());
	}
	reverse_iterator rbegin()
	{
		return (this->c.begin());
	}
	reverse_iterator rend()
	{
		return (this->c.end());
	}	
	const_reverse_iterator crbegin()
	{
		return (this->c.begin());
	}
	const_reverse_iterator crend()
	{
		return (this->c.end());
	}
};

#endif
