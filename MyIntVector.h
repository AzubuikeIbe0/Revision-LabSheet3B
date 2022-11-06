#pragma once
#include <iostream>
using namespace std;

class MyIntVector
{
private:
	int m_size;
	int m_capacity;
	int* arrPtr;

public:

	MyIntVector();
	void push_back(int val);
	int size();
	int capacity();
	int resize(int i);
	int& at(int i);
	const int& at(double i);
	int& operator[](int i);
	const int& operator[](int i) const;
	
	~MyIntVector();

};