#include "stdafx.h"
#include "Circle.h"
#include "Square.h"
#include "Math.h"
#include <iostream>


Circle::Circle(float x, float y, float size):
	Shape(x,y,size)
{

}



bool Circle::detectCollision(Circle rhs)
{
	using namespace std;
	float dx = this->getX() - rhs.getX();
	float dy = this->getY() - rhs.getY();
	float distance = sqrt(dx * dx + dy * dy);
	if (distance < (this->getSize() + rhs.getSize())) {
		ifCollision(*this, rhs);
		return true;
	}

	return false;
}
bool Circle::detectCollision(Square rhs)
{
	moveShape(10, 0);
	return false;
}


Circle::~Circle()
{
}
