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
	if (m_size < m_capacity)
	{
		//resize(2 * m_capacity);
		arrPtr[++m_size] = val;
	}
	else
	{
		resize(2 * m_capacity);
		arrPtr[++m_size] = val;
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

void MyIntVector::resize(int new_cap)
{
	int* new_arr = arrPtr;
	arrPtr = new int[new_cap];

	if (new_cap < m_capacity)
	{
		// copy and cut off 

		for (int i = 0; i < new_cap; i++)
		{
			arrPtr[i] = new_arr[i];
		}

	}
	if (new_cap > m_capacity)
	{
		// copy and add zero
		for (int i = 0; i < m_capacity; i++)
		{
			arrPtr[i] = new_arr[i];
		}
		for (int j = m_capacity; j < new_cap; j++)
		{
			arrPtr[j] = 0;

		}
	}

	m_capacity = new_cap;
	delete[] new_arr;
	new_arr = nullptr;

}

int& MyIntVector::at(int i)
{
	if (i < 0 || i >= m_size)
	{
		std::cout << "Array out of bounds!" << endl;
	}
	else
	{
		return i;
	}
}

const int& MyIntVector::at(double i)
{
	if (i < 0 || i >= m_size)
	{
		std::cout << "Array out of bounds!" << endl;
	}
	else
	{
		return i;
	}

	
}


int& MyIntVector::operator[](int i)
{
	
	
		return arrPtr[i];
	
}

const int& MyIntVector::operator[](int i) const
{
	
		return arrPtr[i];

	
}

MyIntVector::~MyIntVector()
{
	delete[] arrPtr;
	arrPtr = nullptr;
}