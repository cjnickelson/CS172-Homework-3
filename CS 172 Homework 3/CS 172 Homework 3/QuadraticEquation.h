#pragma once

#include<iostream>

using namespace std;

class QuadraticEquation
{
	double a, b, c;
public:
	QuadraticEquation(double n1,double n2, double n3)
	{
		a = n1;
		b = n2;
		c = n3;
	}

	double getDiscriminant();
	double getRoot1();
	double getRoot2();
	double getA();
	double getB();
	double getC();
};