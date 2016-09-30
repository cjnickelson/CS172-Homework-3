#include"QuadraticEquation.h"
#include<cmath>

double QuadraticEquation::getDiscriminant()
{
	// retrieve the private values of a b and c
	a = getA();
	b = getB();
	c = getC();

	// calculate and return the discriminant
	return b*b - 4 * a*c;
}

double QuadraticEquation::getRoot1()
{
	// retrieve private values a and b
	a = getA();
	b = getB();

	// if discriminant is negative, roots are not real, so exit and return 0.
	if (getDiscriminant() < 0)
		return 0;
	// otherwise, calculate and return the first root
	else
		return (-b + sqrt(getDiscriminant())) / (2 * a);
}

double QuadraticEquation::getRoot2()
{
	// retrieve private values a and b
	a = getA();
	b = getB();

	// if discriminant is negative, roots are not real, so exit and return 0.
	if (getDiscriminant() < 0)
		return 0;
	// otherwise, calculate and return the second root
	else
		return (-b - sqrt(getDiscriminant())) / (2 * a);
}

// return the values for each of the member variables

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