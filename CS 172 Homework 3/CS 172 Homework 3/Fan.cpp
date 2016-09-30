#include "Fan.h"

// return the fan speed
int Fan:: getSpeed()
{
	return speed;
}

void Fan :: setSpeed(int tempspeed)
{
	// speed must be 1 2 or 3, so while the input is not one of these values, tell user to input new value
	while (tempspeed != 1 && tempspeed != 2 && tempspeed != 3)
	{
		cout << "Invalid speed. Must be 1, 2, or 3" << endl;
		cin >> tempspeed;
	}
	// once a valid value is supplied, set it to the speed
	speed = tempspeed;
}

// return the status of the fan
bool Fan::getOn()
{
	return on;
}

void Fan::setOn(bool tempstatus)
{
	// fan must be on or off, so check if status is 0 or 1. While it isn't, have user re-enter
	while (tempstatus != 1 && tempstatus != 0)
	{
		cout << "Invalid. 1=on, 0=off. Please re-enter.";
		cin >> tempstatus;
	}
	// set valid intry to the boolean variable "on"
	on = tempstatus;
}

// return the fans radius
double Fan::getRadius()
{
	return radius;
}

void Fan::setRadius(int temprad)
{
	// radius of the fan has to be positive, so while it isn't get the user to give a new value. 
	while (temprad <= 0)
	{
		cout << "Invalid. Fan radius must exceed 0. Re-enter." << endl;
		cin >> temprad;
	}

	// return the actual radius
	radius = temprad;
}