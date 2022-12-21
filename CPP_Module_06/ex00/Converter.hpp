#ifndef CONVERTER_HPP
#define CONVERTER_HPP
# include <iostream>


// 1. raw값인 str으로 받아서 어떤 자료형인가 판단
// 2. 어떤 값이라고 판단되면 그 값으로 변경
// 3. 그 값을 각 양식에 맞게 출력.

class Converter
{
private:
	std::string	_raw;
	char		_c;
	int			_i;
	float		_f;
	double		_d;
public:
	Converter();
	Converter(const Converter& obj);
	~Converter();
	Converter& operator=(const Converter& obj);
};

#endif