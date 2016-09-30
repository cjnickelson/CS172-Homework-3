#pragma once

#include<iostream>
#include<string>

using namespace std;

class MyInteger
{
	int value;

public:

	static int total;

	MyInteger(int n)
	{
		total = 0;
		value = n;
		total += n;
	}

	int getValue()const;
	bool isEven()const;
	bool isOdd()const;
	bool isPrime()const;
	static bool isEven(int);
	static bool isOdd(int);
	static bool isPrime(int);
	static bool isEven(const MyInteger&);
	static bool isOdd(const MyInteger&);
	static bool isPrime(const MyInteger&);
	bool equals(int)const;
	bool equals(const MyInteger&)const;
	static int parseInt(const string&);

};

/*
            UML Diagram
_______________________________________
- int value
+ static int total
_______________________________________
+ int getValue()
+ bool isEven()
+ bool isOdd()
+ bool isPrime()
+ static bool isEven(int)
+ static bool isOdd(int)
+ static bool isPrime(int)
+ static bool isEven(const MyInteger&)
+ static bool isOdd(const MyInteger&)
+ static bool isPrime(const MyInteger&)
+ bool equals(int)
+ bool equals(const MyInteger&)
+ static int parseInt(const string&)
______________________________________
*/