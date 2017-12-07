#include "stdafx.h"
#include "Square.h"
#include "Circle.h"

Square::Square() {
}
Square::Square(float x, float y, float width, float height):
	Shape(x,y)
{
	setHeight(height);
	setWidth(width);
}

const float Square::getWidth() {
	return width;
}
const float Square::getHeight() {
	return height;
}

void Square::setWidth(float newWidth) {
	this->width = newWidth;
}
void Square::setHeight(float newHeight) {
	this->height = newHeight;
}


bool Square::detectCollision(Shape rhs)
{
	moveShape(20, 0);
	return false;
}

Square::~Square()
{
}
