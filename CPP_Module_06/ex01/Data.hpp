#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <iostream>

struct Data
{
	int num;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
