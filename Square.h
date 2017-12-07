#pragma once
#include "Shape.h"
#include "Circle.h"

class Square : public Shape
{
public:
	Square();
	Square(float x, float y, float width, float height);
	const float getWidth();
	const float getHeight();
	void setWidth(float newWidth);
	void setHeight(float newHeight);
	bool detectCollision(Shape rhs);
	~Square();
private:
	float width;
	float height;
};

