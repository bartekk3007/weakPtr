#include <iostream>

class Base
{
	public:
	int number;
	char letter;
	Base() : number(0), letter(' ')
	{

	}
	Base(int x) : number(x), letter(' ')
	{

	}
	Base(int x, char c) : number(x), letter(c)
	{

	}
};