#include "stdafx.h"
#include "Circle.h"
#include "Square.h"


Circle::Circle(float x, float y, float radius):
	Shape(x,y)
{
	setRadius(radius);
}

const float Circle::getRadius() {
	return radius;
}

void Circle::setRadius(float newRadius) {
	this->radius = newRadius;
}

bool Circle::detectCollision(Shape rhs)
{
	moveShape(10, 0);
	return false;
}



Circle::~Circle()
{
}
