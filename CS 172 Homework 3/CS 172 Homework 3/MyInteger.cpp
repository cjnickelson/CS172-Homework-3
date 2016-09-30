#include"MyInteger.h"
#include<cmath>

// get function returns the value of the integer
int MyInteger::getValue()const
{
	return value;
}

bool  MyInteger::isEven()const
{
	// if the remainder when dividing by 2 is 0, then the integer is even.
	if (value % 2 == 0)
		return true;
	else
		return false;
}

bool  MyInteger::isOdd()const
{
	// if the remainder when dividing by 2 is 1, then the integer is odd.
	if (value % 2 == 1)
		return true;
	else
		return false;
}

bool  MyInteger::isPrime()const
{
	// introduce the "max" variable, the highest number we have to check
	double max = sqrt(value);
	
	// assume number is prime
	bool test = true;

	// for each integer between 2 and the max value, check to see if it divides evenly. if it does, change test to false because number can no longer be prime.
	for (int i = 2; i <= max; i++)
	{
		if (value%i == 0)
		{
			test = false;
			break;
		}
	}

	// return the results
	return test;
}

bool  MyInteger::isEven(int n)
{
	// same as above, for isEven()
	if (n % 2 == 0)
		return true;
	else
		return false;
}

bool  MyInteger::isOdd(int n)
{
	// same as above for isOdd()
	if (n % 2 == 1)
		return true;
	else 
		return false;
}

bool  MyInteger::isPrime(int n)
{
	// same as above for isPrime()
	double max = sqrt(n);
	bool test = true;
	for (int i = 2; i <= max; i++)
	{
		if (n%i == 0)
		{
			test = false;
			break;
		}
	}
	return test;
}

bool  MyInteger::isEven(const MyInteger&a)
{
	// same as above, using the static variable total rather than a member variable
	if (total % 2 == 0)
		return true;
	else
		return false;
}

bool  MyInteger::isOdd(const MyInteger&a)
{
	// same as above, using the static variable total rather than a member variable
	if (total % 2 == 1)
		return true;
	else
		return false;
}

bool  MyInteger::isPrime(const MyInteger&a)
{
	// same as above, using the static variable total rather than a member variable
	double max = sqrt(total);
	bool test = true;
	for (int i = 2; i <= max; i++)
	{
		if (total%i == 0)
		{
			test = false;
			break;
		}
	}
	return test;
}

bool  MyInteger::equals(int n)const
{
	// if the value held in MyInteger is equal to n, then return true. Otherwise, return false
	if (value == n)
		return true;
	else
		return false;
}

bool  MyInteger::equals(const MyInteger& a)const
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