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
	if (total % 2 == 0)
		return true;
	else
		return false;
}

bool  MyInteger::isOdd(const MyInteger&)
{
	if (total % 2 == 1)
		return true;
	else
		return false;
}

bool  MyInteger::isPrime(const MyInteger&)
{
	double max = sqrt(total);
	int test = 0;
	for (int i = 2; i <= max; i++)
	{
		if (total%i == 0)
		{
			test = 1;
			break;
		}
	}
	return(test = 1 ? false : true);
}

bool  MyInteger::equals(int n)const
{
	if (value == n)
		return true;
	else
		return false;
}

bool  MyInteger::equals(const MyInteger&)const
{
	if (value == total)
		return true;
	else 
		return false;
}

int  MyInteger::parseInt(const string& s)
{
	int sum = 0;
	for (int i = 0; i < s.length(); i++)
		sum += static_cast<int>(s[i]);
	return sum;
}