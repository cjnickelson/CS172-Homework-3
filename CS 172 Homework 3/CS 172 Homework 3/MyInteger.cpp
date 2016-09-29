#include"MyInteger.h"
#include<cmath>

int MyInteger::getValue()const
{
	return value;
}
bool  MyInteger::isEven()const
{
	if (value % 2 == 0)
		return true;
	else
		return false;
}

bool  MyInteger::isOdd()const
{
	if (value % 2 == 1)
		return true;
	else
		return false;
}

bool  MyInteger::isPrime()const
{
	double max = sqrt(value);
	int test = 0;
	for (int i = 2; i <= max; i++)
	{
		if (value%i == 0)
		{
			test = 1;
			break;
		}
	}
	return (test = 1 ? false : true);
}

bool  MyInteger::isEven(int n)
{
	if (n % 2 == 0)
		return true;
	else
		return false;
}

bool  MyInteger::isOdd(int n)
{
	if (n % 2 == 1)
		return true;
	else 
		return false;
}

bool  MyInteger::isPrime(int n)
{
	double max = sqrt(n);
	int test = 0;
	for (int i = 2; i <= max; i++)
	{
		if (n%i == 0)
		{
			test = 1;
			break;
		}
	}
	return (test = 1 ? false : true);
}

bool  MyInteger::isEven(const MyInteger&)
{
	if (value % 2 == 0)
		return true;
	else
		return false;
}

bool  MyInteger::isOdd(const MyInteger&)
{

}

bool  MyInteger::isPrime(const MyInteger&)
{

}

bool  MyInteger::equals(int)const
{

}

bool  MyInteger::equals(const MyInteger&)const
{

}

int  MyInteger::parseInt(const string&)
{

}