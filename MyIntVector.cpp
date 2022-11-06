#include "MyIntVector.h"

MyIntVector::MyIntVector()
{
	m_size = 0;
	m_capacity = 10;
	arrPtr = new int[10];
	for (int i = 0; i < m_capacity; i++)
	{
		arrPtr[i] = 0;
	}
}

void MyIntVector::push_back(int val)
{
	if (m_size >= m_capacity)
	{
		resize(2 * m_capacity);
		arrPtr[m_size] = val;
		++m_size;
	}
	
}

int MyIntVector::size()
{
	return m_size;
}

int MyIntVector::capacity()
{
	return m_capacity;
}

int MyIntVector::resize(int i)
{
	if (m_size <= m_capacity) return m_capacity;

	int* new_arr = new int[m_size];

	for (int i = 0; i < m_capacity; i++)
	{
		new_arr[i] = arrPtr[i];
	}

	m_capacity = m_size;
	
	delete[] arrPtr;

	arrPtr = new_arr;

	return m_capacity;
}

int& MyIntVector::at(int i)
{
	if (i > m_size)
	{
		std::cout << "Array out of bounds!" << endl;
	}
	else
	{
		std::cout << "Array at index " << i << " is " << arrPtr[i] << endl;
	}

	return arrPtr[i];
}

const int& MyIntVector::at(double i)
{
	if (i > m_size)
	{
		std::cout << "Array out of bounds!" << endl;
	}
	else
	{
		std::cout << "Array index " << i << " is " << endl;
	}

	return i;
}


int& MyIntVector::operator[](int i)
{
	if (i < 0 || i >= m_size)
	{
		std::cout << "Range Error!" << endl;
	}
	return arrPtr[i];
}

const int& MyIntVector::operator[](int i) const
{
	if (i < 0 || i >= m_size)
	{
		std::cout << "Range Error!" << endl;
	}
	return arrPtr[i];
}

MyIntVector::~MyIntVector()
{
	delete[] arrPtr;
	arrPtr = NULL;
}