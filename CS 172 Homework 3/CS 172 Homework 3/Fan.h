#pragma once

#include<iostream>

using namespace std;

class Fan
{
	int speed;
	bool on;
	double radius;

public:

	Fan() {
		setSpeed(1);
		speed = getSpeed();
		setOn(0);
		on = getOn();
		setRadius(5);
		radius = getRadius();
	}

	int getSpeed();
	void setSpeed(int tempspeed);
	bool getOn();
	void setOn(bool tempstatus);
	double getRadius();
	void setRadius(int temprad);

};

/*
             UML Diagram
___________________________________
- int speed
- bool on
- double radius
___________________________________
+ int getSpeed()
+ void setSpeed(int tempspeed)
+ bool getOn()
+ void setOn(bool tempstatus)
+ double getRadius()
+ void setRadius(int temprad)
___________________________________
*/