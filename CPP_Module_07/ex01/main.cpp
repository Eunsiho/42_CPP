#include "iter.hpp"

int main(void)
{
	int* intArr = new int[5];
	intArr[0] = 1;
	intArr[1] = 2;
	intArr[2] = 3;
	intArr[3] = 4;
	intArr[4] = 5;

	char* charArr = new char[5];
	charArr[0] = 'a';
	charArr[1] = 'b';
	charArr[2] = 'c';
	charArr[3] = 'd';
	charArr[4] = 'e';

	iter(intArr, 3, printElem);
	iter(charArr, 4, printElem);

	delete []intArr;
	delete []charArr;

	return (0);
}
