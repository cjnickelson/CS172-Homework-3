#pragma once

#include<iostream>

using namespace std;

class EvenNumber
{
	int value;
public:
	EvenNumber()
	{
		value = 0;
	}

	EvenNumber(int n)
	{
		value = n;
	}

	int getValue();
	int getNext();
	int getPrevious();
	void setValue(int);

};