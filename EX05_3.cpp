﻿// EX05_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stack>
using namespace std;

// 11/20

//PT -- put this in a separate .h/.cpp file
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
		//PT -- myArray = NULL;
	}
	myVector<T>(int size)
	{
		this->size = size;
		capacity = size;
		//PT -- allocate space for the array
		// -2
		/*
		myArray = new T[size];
		*/
	}
	myVector(int size, T defaultValue)
	{
		this->size = size;
		capacity = size;

		//PT -- allocate space for the array
		/*
		myArray = new T[size];
		*/

		for (int i = 0; i < size; i++)
			myArray[i] = defaultValue;
	}

	void push_back(T element)
	{
		if (size == capacity)
		{
			//PT -- in the default constructor, size is initialized to 0, so doubling it won't help.
			int* newList = new int[size * 2];

			for (int i = 0; i < size; i++)
			{
				newList[i] = myArray[i];
			}
		}

		//PT -- why do you need a stack? Just add the new item to the end of the array.
		// -2
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
		//PT -- again, why do you need a stack? Just add the new item to the end of the array.
		// -1
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
		//PT -- just return whether size == 0.
		// -1
		stack<T> myStack;
		for (int i = 0; i < size; i++)
		{
			myStack.push(myArray[i]);
		}
		return myStack.empty();
	}

	void clear()
	{
		//PT -- clear should just set size to 0
		// -1
		for (int i = 0; i < size; i++)
			myArray[i] = NULL;
	}

	void swap(myVector v2)
	{
		//PT -- this isn't a swap, it's a copy.
		// -2
		for (int i = 0; i < size; i++)
			myArray[i] = v2[i];
	}

};


int main() 
{
	//PT -- should really test this

	return 0;
}
