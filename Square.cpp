#include "stdafx.h"
#include "Square.h"
#include "Circle.h"

Square::Square() {
}
Square::Square(float x, float y, float size) :
	Shape(x, y, size)
{
}

bool Square::detectCollision(Shape rhs)
{
	moveShape(20, 0);
	return false;
}

Square::~Square()
{
}
