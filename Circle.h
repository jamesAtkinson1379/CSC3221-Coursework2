#pragma once
#include "Shape.h"
#include "Square.h"

class Circle : public Shape
{
public:
	Circle();
	Circle(float x, float y, float size);
	bool detectCollision(Shape rhs);
	~Circle();
private:
	float radius;
};

