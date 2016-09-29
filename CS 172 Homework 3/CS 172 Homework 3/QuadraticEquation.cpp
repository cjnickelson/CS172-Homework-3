#include"QuadraticEquation.h"
#include<cmath>

double QuadraticEquation::getDiscriminant()
{
	a = getA();
	b = getB();
	c = getC();
	return b*b - 4 * a*c;
}

double QuadraticEquation::getRoot1()
{
	a = getA();
	b = getB();
	if (getDiscriminant() < 0)
		return 0;
	else
		return (-b + sqrt(getDiscriminant())) / (2 * a);
}

double QuadraticEquation::getRoot2()
{
	a = getA();
	b = getB();
	if (getDiscriminant() < 0)
		return 0;
	else
		return (-b - sqrt(getDiscriminant())) / (2 * a);
}

double QuadraticEquation::getA()
{
	return a;
}

double QuadraticEquation::getB()
{
	return b;
}

double QuadraticEquation::getC()
{
	return c;
}