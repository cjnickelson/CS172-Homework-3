#include"EvenNumber.h"

int EvenNumber::getValue()
{
	return value;
}

int EvenNumber::getNext()
{
	return value + 2;
}

int EvenNumber::getPrevious()
{
	return value - 2;
}

void EvenNumber::setValue(int tempvalue)
{
	if (tempvalue % 2 != 0)
	{
		cout << "Value is invalid" << endl;
		value = 0;
	}
	else 
		value = tempvalue;
}