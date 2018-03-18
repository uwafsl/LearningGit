/*
A simple program used for demonstration purposes.

uwafsl@outlook.com

Version History
03/17/18: Created
03/18/18: Updated
*/

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

	cout << "MyMath > Add" << endl;
	cout << a << " + " << b << " = " << Add(a, b) << endl;

	cout << "MyMath > Multiply" << endl;
	cout << a << "^" << b << " = " << Multiply(a, b) << endl;

	cout << "MyMath > NewFeature" << endl;
	cout << a << "^" << b << " = " << NewFeature((double)a, (double)b) << endl;

	return(0);
}