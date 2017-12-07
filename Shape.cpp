#include "stdafx.h"
#include "Shape.h"

Shape::Shape() {
}
Shape::Shape(float x, float y,float size){
	setX(x);
	setY(y);
}
Shape::Shape(const Shape &vector){
	setX(vector.x);
	setY(vector.y);
}

Shape& Shape::operator=(const Shape &vector) {
	setX(vector.x);
	setY(vector.y);
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
	this->size = size;
}
void Shape::moveShape(float dy, float dx) {
	this->x = x + dx;
	this->y = y + dy;
}

Shape::~Shape()
{
}
