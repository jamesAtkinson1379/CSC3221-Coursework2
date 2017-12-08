#include "stdafx.h"
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"

Shape::Shape() {
}
Shape::Shape(float x, float y,float size){
	setX(x);
	setY(y);
	setSize(size);
}
Shape::Shape(const Shape &shape){
	setX(shape.x);
	setY(shape.y);
	setSize(shape.size);
}

Shape& Shape::operator=(const Shape &shape) {
	setX(shape.x);
	setY(shape.y);
	setSize(shape.size);
	return *this;
}

const float Shape::getX() {
	return x;
}
const float Shape::getY() {
	return y;
}
const float Shape::getSize() {
	return size;
}

void Shape::setX(float x) {
		this->x = x;
}
void Shape::setY(float y) {
		this->y = y;
}
void Shape::setSize(float size) {
	if (size > 0) {
		this->size = size;
	}
}

void Shape::moveShape(float dy, float dx) {
	if (this->getX() + dx <= GRID_SIZE && this->getX() + dx >= 0) {
		this->x = x + dx;
	}
	if (this->getY() + dy <= GRID_SIZE && this->getY() + dy >= 0) {
		this->y = y + dy;
	}
}
bool Shape::detectCollision(Square rhs)
{
	return false;
}
bool Shape::detectCollision(Circle rhs)
{
	return false;
}
void Shape::ifCollision(Shape lhs, Shape rhs)
{
	using namespace std;
	cout << "two object have collided" << endl;
}

Shape::~Shape()
{
}
