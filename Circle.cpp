#include "stdafx.h"
#include "Circle.h"
#include "Square.h"
#include "Math.h"
#include <iostream>
#include <algorithm>


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
	if (distance <= (this->getSize() + rhs.getSize())) {
		ifCollision(*this, rhs);
		return true;
	}

	return false;
}
bool Circle::detectCollision(Square rhs)
{
	using namespace std;
	float nearestX = max(rhs.getX(), min(this->getX(), (rhs.getX() + rhs.getSize())));
	float nearestY = max(rhs.getY(), min(this->getX(), (rhs.getY() + rhs.getSize())));

	float dy = this->getX() - nearestX;
	float dx = this->getY() - nearestY;

	if ((dx * dx + dy * dy) < (this->getSize()*this->getSize())) {
		ifCollision(*this, rhs);
		return true;
	}
	return false;
}


Circle::~Circle()
{
}
