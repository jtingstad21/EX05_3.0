// EX05_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stack>
using namespace std;

template <typename T>
class myVector
{
private:
	int size;
	int capacity;
	T* myArray;

public:
	myVector<T>()
	{
		size = 0;
		capacity = 0;
	}
	myVector<T>(int size)
	{
		this->size = size;
		capacity = size;
	}
	myVector(int size, T defaultValue)
	{
		this->size = size;
		capacity = size;

		for (int i = 0; i < size; i++)
			myArray[i] = defaultValue;
	}

	void push_back(T element)
	{
		if (size == capacity)
		{
			int* newList = new int[size * 2];

			for (int i = 0; i < size; i++)
			{
				newList[i] = myArray[i];
			}
		}

		stack<T> myStack;
		for (int i = 0; i < size; i++)
		{
			myStack.push(myArray[i]);
		}
		myStack.push(element);
		capacity++;
	}

	void pop_back()
	{
		stack<T> myStack;
		for (int i = 0; i < size; i++)
		{
			myStack.push(myArray[i]);
		}
		myStack.pop();
		capacity--;
	}

	unsigned sizeOf() const
	{
		int numOfItems = 0;
		for (int i = 0; i < size; i++)
		{
			if (myArray[i] != NULL)
				numOfItems++;
		}
		return numOfItems;
	}

	T at(int index) const
	{
		return myArray[index];
	}

	bool empty() const
	{
		stack<T> myStack;
		for (int i = 0; i < size; i++)
		{
			myStack.push(myArray[i]);
		}
		return myStack.empty();
	}

	void clear()
	{
		for (int i = 0; i < size; i++)
			myArray[i] = NULL;
	}

	void swap(myVector v2)
	{
		for (int i = 0; i < size; i++)
			myArray[i] = v2[i];
	}

};


int main() 
{


	return 0;
}