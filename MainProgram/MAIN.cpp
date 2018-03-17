#include <iostream>

#include "MyMath.h"

using std::cout;
using std::endl;

int main(void)
{
	cout << "Hello World!" << endl;

	//Use an internal library
	int a = 3;
	int b = 4;
	int c = Add(a, b);

	cout << "Calling Add from MyMath.cpp" << endl;
	cout << a << " + " << b << " = " << c << endl;
	return(0);
}