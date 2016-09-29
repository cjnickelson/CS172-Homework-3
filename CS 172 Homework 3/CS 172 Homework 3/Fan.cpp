#include "Fan.h"

int Fan:: getSpeed()
{
	return speed;
}

void Fan :: setSpeed(int tempspeed)
{
	while (tempspeed != 1 && tempspeed != 2 && tempspeed != 3)
	{
		cout << "Invalid speed. Must be 1, 2, or 3" << endl;
		cin >> tempspeed;
	}

	speed = tempspeed;
}

bool Fan::getOn()
{
	return on;
}

void Fan::setOn(bool tempstatus)
{
	while (tempstatus != 1 && tempstatus != 0)
	{
		cout << "Invalid. 1=on, 0=off. Please re-enter.";
		cin >> tempstatus;
	}
	on = tempstatus;
}

double Fan::getRadius()
{
	return radius;
}

void Fan::setRadius(int temprad)
{
	while (temprad <= 0)
	{
		cout << "Invalid. Fan radius must exceed 0. Re-enter." << endl;
		cin >> temprad;
	}
	radius = temprad;
}