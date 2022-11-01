#include <iostream>

int	main(void)
{
	char c;
	std::cout<<"enter char"<<std::endl;
	std::cin>>c;

	std::cout<<(char)std::toupper(c)<<std::endl;
	return (0);
}