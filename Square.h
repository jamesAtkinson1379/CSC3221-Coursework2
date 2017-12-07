#pragma once
#include "Shape.h"
class Circle;

class Square : public virtual Shape
{
public:
	Square();
	Square(float x, float y, float size);
	bool detectCollision(Circle rhs);
	bool detectCollision(Square rhs);
	~Square();
};

