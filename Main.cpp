#include "MyIntVector.h"

int main()
{
	MyIntVector V; //default constructor will set size to 10
	V.push_back(2);// push the integer 2 into the vector
	V.at(3);
	//V.operator[](3);
	V[3];



	return 0;
}