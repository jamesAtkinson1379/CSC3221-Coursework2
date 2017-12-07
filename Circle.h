#pragma once
#include "Shape.h"
#include "Square.h"

class Circle : public Shape
{
public:
	Circle(float x, float y, float size);
	const float getRadius();
	void setRadius(float newRadius);
	bool detectCollision(Shape rhs);
	~Circle();
private:
	float radius;
};

