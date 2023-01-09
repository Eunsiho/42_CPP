#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	try
	{
		std::vector<int>::iterator iter = easyfind(v, 3);
		std::cout << "Number 3 found at index " << std::distance(v.begin(), iter) << std::endl;
	}
	catch (const CantFindException& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
