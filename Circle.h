#pragma once
#include "Shape.h"
class Square;

class Circle : public virtual Shape
{
public:
	Circle();
	Circle(float x, float y, float size);
	bool detectCollision(Circle rhs);
	bool detectCollision(Square rhs);
	~Circle();

};

