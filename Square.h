#pragma once
#include "Shape.h"
#include "Circle.h"

class Square : public Shape
{
public:
	Square();
	Square(float x, float y, float size);
	bool detectCollision(Shape rhs);
	~Square();
private:
	float width;
	float height;
};

