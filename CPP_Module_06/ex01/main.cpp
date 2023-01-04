#include "Data.hpp"

int main (void)
{
	Data* data = new Data;
	data->num = 4;
	uintptr_t uintptr;

	std::cout << "data        : " << data << std::endl;
	std::cout << "data's Num  : " << data->num << std::endl;
	
	uintptr = serialize(data);
	std::cout << "uintptr     : " << uintptr << std::endl;

	std::cout << "rdata       : " << deserialize(uintptr) << std::endl;
	std::cout << "rdata's Num : " << deserialize(uintptr)->num << std::endl;

	delete data;
}
