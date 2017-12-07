#include "stdafx.h"
#include "Circle.h"
#include "Square.h"


Circle::Circle(float x, float y, float size):
	Shape(x,y,size)
{

}



bool Circle::detectCollision(Shape rhs)
{
	moveShape(10, 0);
	return false;
}



Circle::~Circle()
{
}
