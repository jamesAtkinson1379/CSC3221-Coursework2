#include "stdafx.h"
#include "Square.h"
#include "Circle.h"
#include <iostream>
#include <algorithm>

Square::Square() {
}
Square::Square(float x, float y, float size) :
	Shape(x, y, size)
{
}

bool Square::detectCollision(Circle rhs)
{
	using namespace std;
	float nearestX = max(this->getX(), min(rhs.getX(), (this->getX() + this->getSize())));
	float nearestY = max(this->getY(), min(rhs.getX(), (this->getY() + this->getSize())));

	float dy = rhs.getX() - nearestX;
	float dx = rhs.getY() - nearestY;

	if ((dx * dx + dy * dy) < (rhs.getSize()*rhs.getSize())) {
		ifCollision(*this, rhs);
		return true;
	}

	return false;
}

bool Square::detectCollision(Square rhs)
{

	if ((this->getX() < (rhs.getX() + rhs.getSize()) &&
		(this->getX() + this->getSize()) > rhs.getX() &&
		this->getY() < (rhs.getY() + rhs.getSize()) &&
		(this->getY() + this->getSize()) > rhs.getY())) {
		
		ifCollision(*this, rhs);
		return true;
	}
	return false;
}

Square::~Square()
{
}
