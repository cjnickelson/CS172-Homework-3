#include"EvenNumber.h"

// returns the value of the even number
int EvenNumber::getValue()
{
	return value;
}

// adds two to the value to get the next even number
int EvenNumber::getNext()
{
	return value + 2;
}

// subtracts 2 from the number to get the previous even number
int EvenNumber::getPrevious()
{
	return value - 2;
}

// ensures the input is actually even
void EvenNumber::setValue(int tempvalue)
{
	// if modulus with 2 is not 0, it is not even.
	if (tempvalue % 2 != 0)
	{
		cout << "Value is invalid" << endl;
		value = 0;
	}
	else 
		value = tempvalue;
}